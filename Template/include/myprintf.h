/*
** EPITECH PROJECT, 2023
** lib/myprintf
** File description:
** Header file containing declarations for custom printf functions
*/

#ifndef MYPRINTF_H_
    #define MYPRINTF_H_

    #include <stdarg.h>
    #include <limits.h>
    #include <unistd.h>
    #include <stdlib.h>

/**
* @file myprintf.h
* @brief Header file containing declarations for custom printf functions
*/

// Macro definitions
    /**< Absolute value macro */
    #define ABS(value) ((value < 0) ? (-value) : (value))
    /**< Minimum value macro */
    #define MIN(a, b) ((a) < (b) ? (a) : (b))
    /**< Maximum value macro */
    #define MAX(a, b) ((a) >= (b) ? (a) : (b))
    /**< Maximum float value */
    #define MAX_FLOAT 10000000000000000000000000000000000000.0
    /**< Decimal digits */
    #define DECIM "0123456789"
    /**< Hexadecimal digits lowercase */
    #define HEXA_LOWCASE "0123456789abcdef"
    /**< Hexadecimal digits uppercase */
    #define HEXA_UPPERCASE "0123456789ABCDEF"
    /**< Octal digits */
    #define OCTA "01234567"

// Functions for my_printf
/**
* @brief Print an integer
* @param nb Integer to be printed
* @return Number of characters printed
*/
int my_printf_put_nbr(int nb);

/**
* @brief Print a character
* @param c Character to be printed
*/
void my_printf_putchar(char c);

/**
* @brief Print an unsigned integer in the specified base
* @param nbr Unsigned integer to be printed
* @param base Base to be used for printing
* @return Number of characters printed
*/
int my_printf_putnbr_base_unsigned(unsigned int nbr, char const *base);

/**
* @brief Print a double
* @param nb Double to be printed
* @return Number of characters printed
*/
double my_printf_putnbr_double(double nb);

/**
* @brief Print a long long integer in the specified base
* @param nbr Long long integer to be printed
* @param base Base to be used for printing
* @return Number of characters printed
*/
int my_printf_putnbr_long_long(unsigned long long nbr, char const *base);

/**
* @brief Print a scientific notation double
* @param nb Double to be printed
* @return Number of characters printed
*/
double my_printf_putnbr_sct(double nb);

/**
* @brief Print a string
* @param str String to be printed
* @return Number of characters printed
*/
int my_printf_putstr(char const *str);

/**
* @brief Reverse a string
* @param str String to be reversed
* @return Reversed string
*/
char *my_printf_revstr(char *str);

/**
* @brief Get the length of a string
* @param str String to get the length of
* @return Length of the string
*/
int my_printf_strlen(char const *str);

// my_printf
/**
* @brief Custom printf function
* @param format Format string
* @param ... Variable arguments
* @return Number of characters printed
*/
int my_printf(const char *format, ...);

// Specifiers
/**
* @brief Handle specifier %c
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_c(va_list list, int count);

/**
* @brief Handle specifier %E and %G
* @param nb Double to be printed
* @return Number of characters printed
*/
int my_specifier_capital_e_g(double nb);

/**
* @brief Handle specifier %E
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_capital_e(va_list list, int count);

/**
* @brief Handle specifier %F and %G
* @param nb Double to be printed
* @return Number of characters printed
*/
int my_specifier_capital_f_g(double nb);

/**
* @brief Handle specifier %F
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_capital_f(va_list list, int count);

/**
* @brief Handle specifier %G
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_capital_g(va_list list, int count);

/**
* @brief Handle specifier %X
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_capital_x(va_list list, int count);

/**
* @brief Handle specifier %d
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_d(va_list list, int count);

/**
* @brief Handle specifier %e and %g
* @param nb Double to be printed
* @return Number of characters printed
*/
int my_specifier_e_g(double nb);

/**
* @brief Handle specifier %e
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_e(va_list list, int count);

/**
* @brief Handle specifier %f and %g
* @param nb Double to be printed
* @return Number of characters printed
*/
int my_specifier_f_g(double nb);

/**
* @brief Handle specifier %f
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_f(va_list list, int count);

/**
* @brief Handle specifier %g
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_g(va_list list, int count);

/**
* @brief Handle specifier %i
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_i(va_list list, int count);

/**
* @brief Handle specifier %n
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_n(va_list list, int count);

/**
* @brief Handle specifier %o
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_o(va_list list, int count);

/**
* @brief Handle specifier %p
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_p(va_list list, int count);

/**
* @brief Handle specifier %%
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_perc(va_list list, int count);

/**
* @brief Handle specifier %s
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_s(va_list list, int count);

/**
* @brief Handle specifier %u
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_u(va_list list, int count);

/**
* @brief Handle specifier %x
* @param list Argument list
* @param count Number of characters printed
* @return Number of characters printed
*/
int my_specifier_x(va_list list, int count);

#endif /* MYPRINTF_H_ */
