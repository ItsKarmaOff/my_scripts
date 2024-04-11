/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_find_prime_sup.c
*/
#include "my.h"

static int is_prime(int n)
{
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    while (!is_prime(nb)) {
        ++nb;
    }
    return nb;
}
