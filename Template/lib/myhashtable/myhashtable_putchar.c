/*
** EPITECH PROJECT, 2024
** lib/myhashtable
** File description:
** myhashtable_putchar.c
*/
#include "myhashtable.h"

void myhashtable_putchar(char c)
{
    write(1, &c, 1);
}

void myhashtable_putchar_error(char c)
{
    write(2, &c, 1);
}

