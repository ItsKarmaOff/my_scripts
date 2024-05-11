/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** create_hashtable.c
*/
#include "myhashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht;

    if (len <= 0 || hash == NULL) {
        return NULL;
    }
    ht = malloc(sizeof(hashtable_t));
    ht->len = len;
    ht->entries = malloc(sizeof(entry_t *) * len);
    ht->hash = hash;
    return ht;
}
