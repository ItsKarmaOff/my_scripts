/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_o.c
*/
#include "myprintf.h"

int my_specifier_o(va_list list, int count)
{
    int len;

    len = my_printf_putnbr_base_unsigned(va_arg(list, unsigned int), OCTA);
    return len;
}
