/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_strcmp2.c
*/
#include "my.h"

int my_strcmp2(const char *s1, const char *s2)
{
    int result;
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);
    char sorted_str1[len_s1 + 1];
    char sorted_str2[len_s2 + 1];

    if (len_s1 != len_s2) {
        return 1;
    }
    my_strcpy(sorted_str1, s1);
    my_strcpy(sorted_str2, s2);
    my_sort_str(sorted_str1);
    my_sort_str(sorted_str2);
    result = my_strcmp(sorted_str1, sorted_str2);
    return result;
}
