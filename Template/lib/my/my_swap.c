/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_swap.c
*/
#include "my.h"

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
