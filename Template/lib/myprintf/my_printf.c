/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf.c
*/
#include "myprintf.h"

static int my_specifiers(const char *format, va_list list, int count, int i)
{
    char *str = "diuoxXfFeEgGcspn%";
    int (*ptr[]) (va_list, int) = {my_specifier_d, my_specifier_i,
        my_specifier_u, my_specifier_o, my_specifier_x, my_specifier_capital_x,
        my_specifier_f, my_specifier_capital_f, my_specifier_e,
        my_specifier_capital_e, my_specifier_g, my_specifier_capital_g,
        my_specifier_c, my_specifier_s, my_specifier_p, my_specifier_n,
        my_specifier_perc};

    for (int j = 0; j < my_printf_strlen(str); j++) {
        if (format[i] == str[j]) {
            count += (*ptr[j])(list, count);
        }
    }
    return count;
}

int my_printf(const char *format, ...)
{
    va_list list;
    int count = 0;
    int actual = 0;
    int len = my_printf_strlen(format);

    va_start(list, format);
    for (int i = 0; i < len; i++) {
        if (format[i] == '%') {
            actual = count;
            i++;
            count = my_specifiers(format, list, actual, i);
        } else {
            my_printf_putchar(format[i]);
            count++;
        }
    }
    va_end(list);
    return count;
}
