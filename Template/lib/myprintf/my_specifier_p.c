/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_p.c
*/
#include "myprintf.h"

int my_specifier_p(va_list list, int count)
{
    int len = 0;
    unsigned long long nb = va_arg(list, unsigned long long);

    len += my_printf_putnbr_long_long(nb, HEXA_LOWCASE);
    return len;
}
