/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strupcase.c
*/
#include "my.h"

char *my_strupcase(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        str[a] = str[a] - 32;
        a++;
    }
    return (str);
}
