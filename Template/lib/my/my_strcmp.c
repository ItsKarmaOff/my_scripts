/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strcmp.c
*/
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int str1 = 0;
    int str2 = 0;

    while (s1[str1] == s2[str2] && (s1[str1] != '\0' || s2[str2] != '\0')) {
        str1++;
        str2++;
    }
    if (s1[str1] == s2[str2])
        return (0);
    if (s1[str1] > s2[str2])
        return (1);
    if (s1[str1] < s2[str2])
        return (-1);
    return (0);
}
