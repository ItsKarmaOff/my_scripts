/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strndup.c
*/
#include "my.h"

char *my_strndup(char const *src, int n)
{
    int len = my_strlen(src);
    int actual = MIN(n, len);
    char *dup;

    dup = malloc(sizeof(char) * (actual + 1));
    for (int i = 0; i < actual; i++)
        dup[i] = src[i];
    dup[actual] = 0;
    return dup;
}
