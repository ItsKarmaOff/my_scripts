/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_putnbr_sct.c
*/
#include "myprintf.h"

static double f_double(double nb)
{
    nb = nb * 1000000;
    return nb;
}

static double my_put_nbr_sct_next(double nb, char sign, int ten, int len)
{
    int cpt = nb;
    int pt = 0;

    nb = nb - cpt;
    len += my_printf_put_nbr(cpt);
    my_printf_putchar('.');
    len++;
    pt = f_double(nb);
    if (pt == 0) {
        my_printf_putstr("000000");
        len += 6;
    } else {
        len += my_printf_put_nbr(pt);
    }
    my_printf_putchar('e');
    my_printf_putchar(sign);
    len = len + 2;
    len += my_printf_put_nbr(ten);
    return len;
}

double my_printf_putnbr_sct(double nb)
{
    char sign = '_';
    int ten = 0;
    int len = 0;

    if (nb < 0) {
        my_printf_putchar('-');
        nb = nb * (-1);
        len++;
    }
    while (nb >= 10) {
        nb = nb / 10;
        ten ++;
        sign = '+';
    }
    while (nb < 1 && nb > 0) {
        nb = nb * 10;
        ten ++;
        sign = '-';
    }
    return my_put_nbr_sct_next(nb, sign, ten, len);
}
