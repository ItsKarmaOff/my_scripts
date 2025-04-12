#!/usr/bin/env python3
import os
import re
import requests
import subprocess
import getpass
import argparse
import json
import configparser
from pathlib import Path

def extract_components(repo_name):
    """Extrait les composants du nom du dépôt."""
    pattern = r'[BG]-([A-Z]+)-(\d+)-[A-Z]+-\d+-\d+-([a-zA-Z0-9_]+)(?:-[a-z]+\.[a-z]+)?'
    match = re.match(pattern, repo_name)
    if match:
        module, level, project = match.groups()
        grade = f"G{level[0]}"
        return {
            "module": module,
            "grade": grade,
            "project": project
        }
    
    pattern_alt = r'([A-Z]+)-(\d+)-[A-Z]+-\d+-\d+-([a-zA-Z0-9_]+)(?:-[a-z]+\.[a-z]+)?'
    match = re.match(pattern_alt, repo_name)
    if match:
        module, level, project = match.groups()
        grade = f"G{level[0]}"
        return {
            "module": module,
            "grade": grade,
            "project": project
        }
    
    return {
        "module": "UNKNOWN",
        "grade": "UNKNOWN",
        "project": repo_name.split('-')[-1].split('.')[0]
    }


def create_destination_path(components, base_dir):
    """Crée le chemin de destination basé sur les composants extraits."""
    path = os.path.join(
        base_dir,
        "Epitech",
        components["grade"],
        components["module"],
        components["project"]
    )
    return path

def ensure_directory_exists(path):
    """S'assure que le répertoire existe, le crée s'il n'existe pas."""
    if not os.path.exists(path):
        os.makedirs(path)
    return path

def clone_or_update_repository(repo_url, destination, token):
    """Clone le dépôt vers la destination ou le met à jour s'il existe déjà."""
    authenticated_url = repo_url.replace('https://', f'https://{token}@')
    
    if os.path.exists(os.path.join(destination, '.git')):
        try:
            print(f"Mise à jour du dépôt existant à {destination}...")
            subprocess.run(['git', '-C', destination, 'pull'], check=True)
            print(f"Mise à jour réussie de {repo_url}")
            return True
        except subprocess.CalledProcessError as e:
            print(f"Échec de la mise à jour de {repo_url}: {e}")
            return False
    else:
        try:
            ensure_directory_exists(os.path.dirname(destination))
            subprocess.run(['git', 'clone', authenticated_url, destination], check=True)
            print(f"Clonage réussi de {repo_url} vers {destination}")
            return True
        except subprocess.CalledProcessError as e:
            print(f"Échec du clonage de {repo_url}: {e}")
            return False

def get_organization_repos(org_name, token):
    """Récupère tous les dépôts d'une organisation."""
    headers = {
        'Authorization': f'token {token}',
        'Accept': 'application/vnd.github.v3+json'
    }
    url = f'https://api.github.com/orgs/{org_name}/repos'
    
    repos = []
    page = 1
    
    while True:
        response = requests.get(f'{url}?page={page}&per_page=100', headers=headers)
        
        if response.status_code != 200:
            print(f"Échec de la récupération des dépôts: {response.status_code}")
            error_msg = response.json().get('message', 'Erreur inconnue')
            print(f"Erreur: {error_msg}")
            break
        
        page_repos = response.json()
        if not page_repos:
            break
        
        repos.extend(page_repos)
        page += 1
    
    return repos

def load_config(config_file='github_config.ini'):
    """Charge la configuration depuis un fichier."""
    config = configparser.ConfigParser()
    if os.path.exists(config_file):
        config.read(config_file)
        return config
    return None

def save_config(config_data, config_file='github_config.ini'):
    """Sauvegarde la configuration dans un fichier."""
    config = configparser.ConfigParser()
    config['github'] = config_data
    with open(config_file, 'w') as f:
        config.write(f)
    if os.name == 'posix':
        os.chmod(config_file, 0o600)

def get_token_from_env():
    """Récupère le token depuis une variable d'environnement."""
    return os.environ.get('GITHUB_TOKEN')

def main():
    parser = argparse.ArgumentParser(description='Clone ou met à jour tous les dépôts d\'une organisation GitHub.')
    parser.add_argument('--org', help='Nom de l\'organisation GitHub')
    parser.add_argument('--token', help='Token d\'accès personnel GitHub')
    parser.add_argument('--dir', help='Répertoire de base pour le clonage (par défaut: répertoire courant)')
    parser.add_argument('--no-confirm', action='store_true', help='Sauter la confirmation pour chaque dépôt')
    parser.add_argument('--save-config', action='store_true', help='Sauvegarder la configuration pour usage futur')
    parser.add_argument('--config-file', default='github_config.ini', help='Chemin vers le fichier de configuration')
    args = parser.parse_args()
    
    config = load_config(args.config_file)
    config_values = {}
    if config and 'github' in config:
        config_values = config['github']
    
    # Chercher le token dans différentes sources, par ordre de priorité:
    # 1. Arguments en ligne de commande
    # 2. Variable d'environnement
    # 3. Fichier de configuration
    # 4. Demander à l'utilisateur
    
    org_name = args.org or config_values.get('org') or input("Entrez le nom de l'organisation GitHub: ")
    
    token = args.token
    if not token:
        token = get_token_from_env()
        if not token:
            token = config_values.get('token')
            if not token:
                token = getpass.getpass("Entrez votre token d'accès personnel GitHub: ")
    
    base_dir = args.dir or config_values.get('base_dir') or input("Entrez le répertoire de base pour le clonage (par défaut: répertoire courant): ") or os.getcwd()
    
    if args.save_config:
        config_data = {
            'org': org_name,
            'token': token,
            'base_dir': base_dir
        }
        save_config(config_data, args.config_file)
        print(f"Configuration sauvegardée dans {args.config_file}")

    
    print(f"Récupération des dépôts pour {org_name}...")
    repos = get_organization_repos(org_name, token)
    
    if not repos:
        print("Aucun dépôt trouvé ou échec de récupération des dépôts.")
        return
    
    print(f"Trouvé {len(repos)} dépôts.")
    
    for repo in repos:
        repo_name = repo['name']
        repo_url = repo['clone_url']
        
        print(f"\nTraitement du dépôt: {repo_name}")
        components = extract_components(repo_name)
        destination = create_destination_path(components, base_dir)
        
        print(f"Destination: {destination}")
        print(f"Composants: Module={components['module']}, Grade={components['grade']}, Projet={components['project']}")
        
        if args.no_confirm or input("Procéder avec ce dépôt? (o/n, par défaut: o): ").lower() != 'n':
            clone_or_update_repository(repo_url, destination, token)
        else:
            print(f"Ignorer {repo_name}")

if __name__ == "__main__":
    config_file = 'github_config.ini'
    if not os.path.exists(config_file):
        print("\nRemarque importante sur la sécurité:")
        print("-------------------------------------")
        print("Si vous sauvegardez votre token GitHub avec l'option --save-config,")
        print("il sera stocké dans un fichier texte sur votre système.")
        print("Assurez-vous que votre ordinateur est sécurisé et que personne d'autre n'y a accès.")
        print("Le fichier sera créé avec des permissions restrictives si possible.")
        print("Vous pouvez aussi utiliser la variable d'environnement GITHUB_TOKEN à la place.")
        print("-------------------------------------\n")
    
    main()