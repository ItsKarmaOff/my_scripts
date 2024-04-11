/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_capital_e.c
*/
#include "myprintf.h"

int my_specifier_capital_e(va_list list, int count)
{
    int len = 0;
    double nb = va_arg(list, double);
    double max_float = MAX_FLOAT;

    if (nb >= -(max_float) && nb <= max_float) {
        len += my_printf_putnbr_sct(nb);
    } else {
        my_printf_putstr("INF");
        len += my_printf_strlen("INF");
    }
    return len;
}
