/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_str_isprintable.c
*/
#include "my.h"

int my_str_isprintable(char const *str)
{
    int result = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 126) {
            result = 1;
        } else {
            return (0);
        }
    }
    return (result);
}
