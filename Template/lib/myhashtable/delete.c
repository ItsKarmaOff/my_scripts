/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** delete.c
*/
#include "myhashtable.h"

static int ht_delete_next(hashtable_t *ht, int index,
    entry_t *current_entry, entry_t *previous_entry)
{
    if (previous_entry == NULL) {
        ht->entries[index] = current_entry->next;
    } else {
        previous_entry->next = current_entry->next;
    }
    free(current_entry->value);
    free(current_entry);
    return 0;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int index;
    entry_t *current_entry;
    entry_t *previous_entry = NULL;

    if (ht == NULL || key == NULL)
        return 84;
    index = ht->hash(key, ht->len) % ht->len;
    current_entry = ht->entries[index];
    while (current_entry != NULL) {
        if (current_entry->key == ht->hash(key, ht->len)) {
            ht_delete_next(ht, index, current_entry, previous_entry);
            return 0;
        }
        previous_entry = current_entry;
        current_entry = current_entry->next;
    }
    return 84;
}
