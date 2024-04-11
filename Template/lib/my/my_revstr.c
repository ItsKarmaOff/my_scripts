/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_revstr.c
*/
#include "my.h"

char *my_revstr(char *str)
{
    char temp;
    int first = 0;
    int last = my_strlen(str) - 1;

    while (first < last) {
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first = first + 1;
        last = last - 1;
    }
    return (str);
}
