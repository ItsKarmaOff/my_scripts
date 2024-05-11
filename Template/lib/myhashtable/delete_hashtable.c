/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** delete_hashtable.c
*/
#include "myhashtable.h"

void delete_hashtable(hashtable_t *ht)
{
    entry_t *current_entry;
    entry_t *next_entry;

    for (int i = 0; i < ht->len; i++) {
        current_entry = ht->entries[i];
        while (current_entry != NULL) {
            next_entry = current_entry->next;
            free(current_entry->value);
            free(current_entry);
            current_entry = next_entry;
        }
    }
    free(ht->entries);
    free(ht);
}
