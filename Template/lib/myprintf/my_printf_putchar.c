/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_putchar.c
*/
#include "myprintf.h"

void my_printf_putchar(char c)
{
    write(1, &c, 1);
}
