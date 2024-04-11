/*
** EPITECH PROJECT, 2024
** lib/my
** File description:
** my_memset.c
*/
#include "my.h"

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    unsigned char value = c;

    for (size_t i = 0; i < n; i++)
        ptr[i] = value;
    return s;
}
