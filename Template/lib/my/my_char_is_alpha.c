/*
** EPITECH PROJECT, 2024
** lib/my
** File description:
** my_char_is_alpha.c
*/
#include "my.h"

int my_char_is_alpha(char const c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
