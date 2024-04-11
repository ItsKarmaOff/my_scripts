/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strlen.c
*/
#include "my.h"

int my_strlen(char const *str)
{
    int len;

    if (str == NULL)
        return 0;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
