/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_put_nbr.c
*/
#include "myprintf.h"

int my_printf_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_printf_putchar('-');
        count++;
        if (nb == INT_MIN) {
            count += my_printf_put_nbr(-(nb / 10));
            my_printf_putchar(nb % 10 + 48);
            count++;
            return (count);
        }
        nb = -nb;
    }
    if (nb >= 10)
        count += my_printf_put_nbr(nb / 10);
    my_printf_putchar(nb % 10 + 48);
    count++;
    return (count);
}
