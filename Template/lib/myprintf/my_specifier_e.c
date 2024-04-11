/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_d.c
*/
#include "myprintf.h"

int my_specifier_e(va_list list, int count)
{
    int len = 0;
    double nb = va_arg(list, double);
    double max_float = MAX_FLOAT;

    if (nb >= -(max_float) && nb <= max_float) {
        len += my_printf_putnbr_sct(nb);
    } else {
        my_printf_putstr("inf");
        len += my_printf_strlen("inf");
    }
    return len;
}
