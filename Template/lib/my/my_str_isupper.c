/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_str_isupper.c
*/
#include "my.h"

int my_str_isupper(char const *str)
{
    int result = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result = 1;
        } else {
            return (0);
        }
    }
    return (result);
}
