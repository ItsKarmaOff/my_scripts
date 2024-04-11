/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_sort_int_array.c
*/
#include "my.h"

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j;

    while (i < size) {
        if (array[i + 1] < array[i]) {
            j = array[i];
            array[i] = array[i + 1];
            array[i + 1] = j;
            i = 0;
        } else {
            i++;
        }
    }
}
