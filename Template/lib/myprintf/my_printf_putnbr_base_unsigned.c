/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** my_printf_putnbr_base_unsigned.c
*/
#include "myprintf.h"

static char conv_base(unsigned int hex, char const *base)
{
    unsigned int i = 0;

    while (base[i] != '\0' && i != hex) {
        i++;
    }
    return base[i];
}

static long unsigned int my_compute_power_rec_unsigned(unsigned int nb,
    unsigned int p)
{
    if (p == 0) {
        return 1;
    } else {
        return nb * my_compute_power_rec_unsigned(nb, p - 1);
    }
}

static int length_nbr(unsigned int nbr, int len)
{
    int i = 0;

    while (my_compute_power_rec_unsigned(len, i) <= nbr) {
        i++;
    }
    return i;
}

int my_printf_putnbr_base_unsigned(unsigned int nbr, char const *base)
{
    char *ptr;
    int i = 0;
    unsigned int cpt = nbr;
    int count = 0;

    ptr = malloc(sizeof(char) * length_nbr(nbr, my_printf_strlen(base)));
    while (cpt > 0) {
        ptr[i] = conv_base(cpt % my_printf_strlen(base), base);
        cpt = cpt / my_printf_strlen(base);
        i++;
    }
    ptr[i] = '\0';
    my_printf_putstr(my_printf_revstr(ptr));
    count += my_printf_strlen(ptr);
    free(ptr);
    return count;
}
