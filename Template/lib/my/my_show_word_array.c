/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_show_word_array.c
*/
#include "my.h"

int my_show_word_array(char *const *tab)
{
    if (tab == NULL)
        return 84;
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
    return 0;
}
