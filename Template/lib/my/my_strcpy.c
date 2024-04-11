/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strcpy.c
*/
#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int a;

    for (a = 0; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }
    dest[a] = '\0';
    return (dest);
}
