/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strcapitalize.c
*/
#include "my.h"

char *my_strcapitalize(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if ((str[a] >= 'a' && str[a] <= 'z')
        && (a == 0 || str[a - 1] == ' ' || str[a - 1] == '-'
        || str[a - 1] == '+')) {
            str[a] = str[a] - 32;
        }
        a++;
    }
    return (str);
}
