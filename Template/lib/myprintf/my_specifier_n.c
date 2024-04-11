/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_n.c
*/
#include "myprintf.h"

int my_specifier_n(va_list list, int count)
{
    int *n = va_arg(list, int *);

    *n = count;
    return count;
}
