/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** insert.c
*/
#include "myhashtable.h"

static int ht_replace(hashtable_t *ht, char *key, char *value)
{
    int index = ht->hash(key, ht->len) % ht->len;

    for (; ht->entries[index] != NULL; ht->entries[index] =
        ht->entries[index]->next) {
        if (ht->entries[index]->key == ht->hash(key, ht->len)) {
            ht->entries[index]->value = myhashtable_strdup(value);
            return 0;
        }
    }
    return 1;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index;
    entry_t *head;

    if (ht == NULL || key == NULL || value == NULL)
        return 84;
    index = ht->hash(key, ht->len) % ht->len;
    head = ht->entries[index];
    if (ht_replace(ht, key, value) == 0)
        return 0;
    ht->entries[index] = malloc(sizeof(entry_t));
    ht->entries[index]->key = ht->hash(key, ht->len);
    ht->entries[index]->value = myhashtable_strdup(value);
    ht->entries[index]->next = head;
    return 0;
}
