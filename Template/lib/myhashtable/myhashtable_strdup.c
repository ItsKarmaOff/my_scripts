/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** myhashtable_strdup.c
*/
#include "myhashtable.h"

char *myhashtable_strdup(char const *src)
{
    int len = myhashtable_strlen(src);
    char *dup;
    int cpy;

    dup = malloc(sizeof(char) * (len + 1));
    for (cpy = 0; src[cpy] != '\0'; cpy++)
        dup[cpy] = src[cpy];
    dup[cpy] = '\0';
    return dup;
}

