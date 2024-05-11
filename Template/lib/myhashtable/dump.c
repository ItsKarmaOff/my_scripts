/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** dump.c
*/
#include "myhashtable.h"

void ht_dump(hashtable_t *ht)
{
    entry_t *head;

    if (ht == NULL)
        return;
    for (int i = 0; i < ht->len; i++) {
        write(1, "[", 1);
        myhashtable_put_nbr(i);
        write(1, "]:\n", 3);
        head = ht->entries[i];
        for (; ht->entries[i] != NULL; ht->entries[i] = ht->entries[i]->next) {
            write(1, "> ", 2);
            myhashtable_put_nbr(ht->entries[i]->key);
            write(1, " - ", 3);
            write(1, ht->entries[i]->value,
                  myhashtable_strlen(ht->entries[i]->value));
            write(1, "\n", 1);
        }
        ht->entries[i] = head;
    }
}
