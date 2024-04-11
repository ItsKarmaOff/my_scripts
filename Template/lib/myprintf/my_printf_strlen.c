/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_strlen.c
*/
#include "myprintf.h"

int my_printf_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
