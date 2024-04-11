/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_str_isalpha.c
*/
#include "my.h"

int my_str_isalpha(char const *str)
{
    int result = 1;

    if (str == NULL)
        return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z'))
            result = 1;
        else
            return 0;
    }
    return (result);
}
