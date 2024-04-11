/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_capital_x.c
*/
#include "myprintf.h"

int my_specifier_capital_x(va_list list, int count)
{
    int len = 0;

    len += my_printf_putnbr_base_unsigned(va_arg(list, unsigned int),
    HEXA_UPPERCASE);
    return len;
}
