/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** myhashtable_put_nbr.c
*/
#include "myhashtable.h"

int myhashtable_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        myhashtable_putchar('-');
        count++;
        if (nb == INT_MIN) {
            count += myhashtable_put_nbr(-(nb / 10));
            myhashtable_putchar(nb % 10 + 48);
            count++;
            return (count);
        }
        nb = -nb;
    }
    if (nb >= 10)
        count += myhashtable_put_nbr(nb / 10);
    myhashtable_putchar(nb % 10 + 48);
    count++;
    return (count);
}

