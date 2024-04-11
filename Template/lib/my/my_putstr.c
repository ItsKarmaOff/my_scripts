/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_putstr.c
*/
#include "my.h"

int my_putstr(char const *str)
{
    if (str == NULL)
        return 84;
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}

int my_putstr_error(char const *str)
{
    if (str == NULL)
        return 84;
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar_error(str[i]);
    return (0);
}
