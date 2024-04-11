/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_putnbr_long_long.c
*/
#include "myprintf.h"

static char conv_base_long_long(unsigned long long hex, char const *base)
{
    int i = 0;

    while (base[i] != '\0' && i != hex) {
        i++;
    }
    return base[i];
}

static long unsigned int my_long_long(unsigned long long nb, unsigned int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    } else {
        return nb * my_long_long(nb, p - 1);
    }
}

static int length_nbr_long_long(unsigned long long nbr, int len)
{
    int i = 0;

    while (my_long_long(len, i) <= nbr) {
        i++;
    }
    return i;
}

int my_printf_putnbr_long_long(unsigned long long nbr, char const *base)
{
    char *ptr;
    int i = 0;
    unsigned int long long cpt = nbr;
    int count = 0;

    ptr = malloc(sizeof(char) * length_nbr_long_long(nbr,
    my_printf_strlen(base)));
    my_printf_putstr("0x");
    count += my_printf_strlen("0x");
    while (cpt > 0) {
        ptr[i] = conv_base_long_long(cpt % my_printf_strlen(base), base);
        cpt = cpt / my_printf_strlen(base);
        i++;
    }
    ptr[i] = '\0';
    my_printf_putstr(my_printf_revstr(ptr));
    count += my_printf_strlen(ptr);
    free(ptr);
    return count;
}
