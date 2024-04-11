/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_compute_power_rec.c
*/
#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int a = nb;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    a = a * my_compute_power_rec(nb, p - 1);
    return (a);
}
