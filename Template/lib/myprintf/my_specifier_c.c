/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_c.c
*/
#include "myprintf.h"

int my_specifier_c(va_list list, int count)
{
    my_printf_putchar(va_arg(list, int));
    return (1);
}
