/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_putnbr_double.c
*/
#include "myprintf.h"

static double neg_nb(double nb)
{
    my_printf_putchar('-');
    nb = nb * (-1);
    return nb;
}

static double float_double(double nb)
{
    nb = nb * 1000000;
    return nb;
}

double my_printf_putnbr_double(double nb)
{
    int cpt = nb;
    int count = 0;
    double res = 0;

    if (nb < 0) {
        neg_nb(nb);
        count++;
    }
    nb = nb - cpt;
    count += my_printf_put_nbr(cpt);
    my_printf_putchar('.');
    count++;
    if (float_double(nb) == 0) {
        my_printf_putstr("000000");
        count += 6;
    } else {
        count += my_printf_put_nbr(float_double(nb));
    }
    res += count;
    return res;
}
