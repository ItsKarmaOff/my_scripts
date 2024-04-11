/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** concat_params.c
*/
#include "my.h"

char *concat_params(int argc, char **argv)
{
    char *str;
    int i;
    int j = 0;

    for (i = 0; i < argc; i++) {
        j = j + my_strlen(argv[i]);
    }
    str = malloc((j + 1) * sizeof(char));
    for (j = 0; j < argc; j++) {
        my_strcat(str, argv[j]);
        my_strcat(str, "\n");
    }
    return (str);
}
