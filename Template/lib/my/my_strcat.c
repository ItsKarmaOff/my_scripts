/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strcat.c
*/
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = 0;
    int src_len = 0;

    while (dest[dest_len] != '\0')
        dest_len++;
    for (; src[src_len] != '\0'; src_len++)
        dest[dest_len + src_len] = src[src_len];
    dest[dest_len + src_len] = '\0';
    return dest;
}
