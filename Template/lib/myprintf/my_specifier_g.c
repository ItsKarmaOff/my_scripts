/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_g.c
*/
#include "myprintf.h"

int my_specifier_g(va_list list, int count)
{
    int len = 0;
    double nb = va_arg(list, double);
    int i = nb;
    double up = 1000000.0;
    double low = 0.000001;

    if (nb == i && nb >= low && nb <= up) {
        len += my_printf_put_nbr(i);
    }
    if (nb != i && nb >= low && nb <= up) {
        len += my_specifier_f_g(nb);
    }
    if (nb == i && (nb < low || nb > up)) {
        len += my_specifier_e_g(nb);
    }
    if (nb != i && (nb < low || nb > up)) {
        len += my_specifier_e_g(nb);
    }
    return len;
}
