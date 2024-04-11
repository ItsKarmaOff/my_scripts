/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_getnbr.c
*/
#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nbr = 0;
    int a = 1;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '-')
            a = a * (- 1);
        if (str[i] >= '0' && str[i] <= '9')
            nbr = (nbr * 10) + (str[i] - 48);
        if (str[i + 1] < '0' || str[i + 1] > '9')
            break;
    }
    return (nbr * a);
}
