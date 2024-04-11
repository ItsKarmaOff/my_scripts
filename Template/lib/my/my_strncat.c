/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strncat.c
*/
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    for (a = 0; dest[a] != '\0'; a++) {
        dest[a] = dest[a];
    }
    for (b = 0; src[b] != '\0' && b < nb; b++) {
        dest[a + b] = src[b];
    }
    return (dest);
}
