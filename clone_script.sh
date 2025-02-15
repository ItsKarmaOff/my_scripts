#!/bin/bash

# Vérification du nombre d'arguments
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 fichier_de_repo endroit_ou_clone"
    exit 1
fi

# Récupération des arguments
fichier_de_repo=$1
endroit_ou_clone=$2

# Lecture du fichier ligne par ligne
while IFS= read -r repo_url; do
    # Extraction des parties de l'URL
    repo_name=$(basename -s .git "$repo_url")
    IFS='-' read -r -a parts <<< "$repo_name"

    # Vérification du nombre de champs attendus
    if [ "${#parts[@]}" -lt 7 ]; then
        echo "Format inattendu de l'URL: $repo_url"
        continue
    fi

    # Détermination du dossier de destination et du nom du dépôt
    folder="${parts[1]}"
    clone_name="${parts[0]}${parts[1]}${parts[2]}_${parts[6]}"

    # Création du dossier si nécessaire
    mkdir -p "$endroit_ou_clone/$folder"

    # Clone du dépôt
    git clone "$repo_url" "$endroit_ou_clone/$folder/$clone_name"
done < "$fichier_de_repo"