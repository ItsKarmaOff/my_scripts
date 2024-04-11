/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_putstr.c
*/
#include "myprintf.h"


int my_printf_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_printf_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
