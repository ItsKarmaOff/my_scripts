/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_i.c
*/
#include "myprintf.h"

int my_specifier_u(va_list list, int count)
{
    int len = 0;

    len += my_printf_putnbr_base_unsigned(va_arg(list, unsigned int), DECIM);
    return len;
}
