/*
** EPITECH PROJECT, 2024
** lib/my
** File description:
** my_char_is_num.c
*/
#include "my.h"

int my_char_is_num(char const c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
