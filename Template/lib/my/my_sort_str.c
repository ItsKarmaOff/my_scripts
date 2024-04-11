/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_sort_str.c
*/
#include "my.h"

static void swap_char(char *str, int i, int j)
{
    char temp;

    if (str[i] > str[j]) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void my_sort_str(char *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            swap_char(str, i, j);
        }
    }
}
