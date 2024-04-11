/*
** EPITECH PROJECT, 2024
** lib/my
** File description:
** my_arraylen.c
*/
#include "my.h"

int my_arraylen(char **array)
{
    int len;

    if (array == NULL)
        return 0;
    for (len = 0; array[len] != NULL; len++);
    return len;
}
