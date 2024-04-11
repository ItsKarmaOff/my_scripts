/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_put_nbr.c
*/
#include "my.h"

int my_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        count++;
        if (nb == INT_MIN) {
            count += my_put_nbr(-(nb / 10));
            my_putchar(nb % 10 + 48);
            count++;
            return (count);
        }
        nb = -nb;
    }
    if (nb >= 10)
        count += my_put_nbr(nb / 10);
    my_putchar(nb % 10 + 48);
    count++;
    return (count);
}
