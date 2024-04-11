/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_d.c
*/
#include "myprintf.h"

int my_specifier_d(va_list list, int count)
{
    int i = va_arg(list, int);
    int len = 0;

    len += my_printf_put_nbr(i);
    return len;
}
