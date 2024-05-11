/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** myhashtable.h
*/
#ifndef MY_SCRIPTS_MYHASHTABLE_H
    #define MY_SCRIPTS_MYHASHTABLE_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <limits.h>
    #include <math.h>

typedef struct entry_s {
    int key;
    char *value;
    struct entry_s *next;
} entry_t;

typedef struct hashtable_s {
    int len;
    entry_t **entries;
    int (*hash)(char *, int);
} hashtable_t;

int myhashtable_strlen(char const *str);
char *myhashtable_strdup(char const *src);
int myhashtable_put_nbr(int nb);
void myhashtable_putchar(char c);
void myhashtable_putchar_error(char c);

hashtable_t *new_hashtable(int (*hash)(char *, int), int len);

void delete_hashtable(hashtable_t *ht);

int ht_insert(hashtable_t *ht, char *key, char *value);

int ht_delete(hashtable_t *ht, char *key);

char *ht_search(hashtable_t *ht, char *key);

void ht_dump(hashtable_t *ht);

#endif //MY_SCRIPTS_MYHASHTABLE_H
