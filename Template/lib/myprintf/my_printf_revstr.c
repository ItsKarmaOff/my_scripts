/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_revstr.c
*/
#include "myprintf.h"

static char count(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

char *my_printf_revstr(char *str)
{
    char b;
    int c = 0;
    int d = count(str) - 1;

    while (c < d) {
        b = str[c];
        str[c] = str[d];
        str[d] = b;
        c = c + 1;
        d = d - 1;
    }
    return (str);
}
