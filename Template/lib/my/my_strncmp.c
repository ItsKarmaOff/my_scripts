/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strncmp.c
*/
#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int str1 = 0;
    int str2 = 0;

    while (s1[str1] == s2[str2] && (str1 != n || str2 != n)
    && (s1[str1] != '\0' || s2[str2] != '\0')) {
        str1++;
        str2++;
    }
    if (s1[str1] == s2[str2]) {
        return (0);
    }
    if (s1[str1] > s2[str2]) {
        return (1);
    }
    if (s1[str1] < s2[str2]) {
        return (-1);
    }
    return (0);
}
