/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_specifier_s.c
*/
#include "myprintf.h"

int my_specifier_s(va_list list, int count)
{
    int len = 0;
    char *str = va_arg(list, char *);

    len += my_printf_strlen(str);
    my_printf_putstr(str);
    return len;
}
