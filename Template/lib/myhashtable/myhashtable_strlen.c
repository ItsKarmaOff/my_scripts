/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** myhashtable_strlen.c
*/
#include "myhashtable.h"

int myhashtable_strlen(char const *str)
{
    int len;

    if (str == NULL)
        return 0;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
