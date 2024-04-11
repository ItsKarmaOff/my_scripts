/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strdup.c
*/
#include "my.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dup;
    int cpy;

    dup = malloc(sizeof(char) * (len + 1));
    for (cpy = 0; src[cpy] != '\0'; cpy++)
        dup[cpy] = src[cpy];
    dup[cpy] = '\0';
    return dup;
}
