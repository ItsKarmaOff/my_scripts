/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** hash.c
*/
#include "myhashtable.h"

int hash(char *key, int len)
{
    unsigned int keyInt = 0;
    int shift;
    int hashValue;

    if (key == NULL || len == 0)
        return 0;
    for (int i = 0; key[i] != '\0'; i++) {
        keyInt = keyInt * 128 + key[i];
    }
    keyInt = keyInt * keyInt;
    shift = (len / 2);
    hashValue = (keyInt >> shift);
    return hashValue;
}
