/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strlowcase.c
*/
#include "my.h"

char *my_strlowcase(char *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        str[a] = str[a] + 32;
    return (str);
}
