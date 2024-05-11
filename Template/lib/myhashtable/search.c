/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** search.c
*/
#include "myhashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int index;
    int int_key;

    if (ht == NULL || key == NULL)
        return NULL;
    index = ht->hash(key, ht->len) % ht->len;
    int_key = ht->hash(key, ht->len);
    while (ht->entries[index] != NULL) {
        if (ht->entries[index]->key == int_key) {
            return ht->entries[index]->value;
        }
        ht->entries[index] = ht->entries[index]->next;
    }
    return NULL;
}
