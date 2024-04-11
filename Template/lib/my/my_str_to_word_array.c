/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** my_str_to_word_array2.c
*/
#include "my.h"

static int exist_in(char *string, char c)
{
    for (int i = 0; string[i] != 0; i++)
        if (string[i] == c)
            return (1);
    return (0);
}

static int count_valid_seps(char *string, char *seps, int *offsets)
{
    int count = 0;
    int end_offset = offsets[1];
    int begin_offset = offsets[0];

    for (int i = 0; i + begin_offset < end_offset; i++) {
        if (!exist_in(seps, string[i + begin_offset]))
            continue;
        if (i > 0 && exist_in(seps, string[i + begin_offset - 1]))
            continue;
        count++;
    }
    return (count);
}

static int *get_offsets(char *string, char *separators)
{
    int len = my_strlen(string);
    int *offsets = malloc(sizeof(int) * 2);

    offsets[0] = 0;
    offsets[1] = len;
    for (; exist_in(separators, string[offsets[0]]) &&
        offsets[0] < len; offsets[0]++);
    for (; exist_in(separators, string[offsets[1] - 1]) &&
        offsets[1] > 0; offsets[1]--);
    return (offsets);
}

static char *get_elem(char *string, int *offsets, char *seps)
{
    int len = 0;
    char *elem;

    for (; exist_in(seps, string[offsets[0]]); offsets[0]++);
    for (; string[offsets[0] + len] != '\0' &&
        !exist_in(seps, string[offsets[0] + len]); len++);
    elem = malloc(sizeof(char) * (len + 1));
    elem[len] = 0;
    for (int i = 0; i < len; i++)
        elem[i] = string[offsets[0] + i];
    offsets[0] += len;
    return (elem);
}

char **my_str_to_word_array(char *string, char *separators)
{
    char **array;
    int *offsets;
    int elems;

    if (string == NULL)
        return (NULL);
    offsets = get_offsets(string, separators);
    elems = count_valid_seps(string, separators, offsets) + 1;
    array = malloc(sizeof(char *) * (elems + 1));
    array[elems] = NULL;
    for (int i = 0; i < elems; i++) {
        array[i] = get_elem(string, offsets, separators);
    }
    free(offsets);
    return (array);
}
