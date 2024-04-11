/*
** EPITECH PROJECT, 2024
** Template_save
** File description:
** my_free_array.c
*/
#include "my.h"

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
