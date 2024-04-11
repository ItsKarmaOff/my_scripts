/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strncpy.c
*/
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    while (src[a] != '\0' && a < n) {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return (dest);
}
