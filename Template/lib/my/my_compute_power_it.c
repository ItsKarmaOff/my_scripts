/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_compute_power_it.c
*/
#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int i;
    int result = 1;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    for (i = 0; i < p; i++) {
        result = result * nb;
    }
    return (result);
}
