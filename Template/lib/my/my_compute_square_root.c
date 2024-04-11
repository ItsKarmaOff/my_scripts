/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_compute_square_root.c
*/
#include "my.h"

int my_compute_square_root(int nb)
{
    int a = 1;

    while (a * a != nb)
        a++;
    return a;
}
