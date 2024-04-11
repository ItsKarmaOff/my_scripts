/*
** EPITECH PROJECT, 2023
** lib/my
** File description:
** Header file containing various utility functions
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <limits.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <sys/wait.h>

/**
* @file my.h
* @brief Header file containing various utility functions
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

/**
* @brief Concatenate all the arguments passed
*
* @param argc Number of arguments
* @param argv Array of arguments
* @return Concatenated string
*/
char *concat_params(int argc, char **argv);

/**
* @brief Free a two-dimensional array
*
* @param array Array to be freed
*/
void free_array(char **array);

/**
* @brief Get the length of a two-dimensional array
*
* @param array Array to get the length of
* @return Length of the array
*/
int my_arraylen(char **array);

/**
* @brief Check if a character is an alphabetical character
*
* @param c Character to be checked
* @return Returns 1 if it's an alphabetical character, 0 otherwise
*/
int my_char_is_alpha(char const c);

/**
* @brief Check if a character is a numerical character
*
* @param c Character to be checked
* @return Returns 1 if it's a numerical character, 0 otherwise
*/
int my_char_is_num(char const c);

/**
* @brief Calculate the power of a number iteratively
*
* @param nb Base number
* @param p Power
* @return Result of nb raised to the power of p
*/
int my_compute_power_it(int nb, int p);

/**
* @brief Calculate the power of a number recursively
*
* @param nb Base number
* @param power Power
* @return Result of nb raised to the power of power
*/
int my_compute_power_rec(int nb, int power);

/**
* @brief Calculate the square root of a number
*
* @param nb Number to calculate the square root of
* @return Integer square root of nb
*/
int my_compute_square_root(int nb);

/**
* @brief Find the smallest prime number greater than or equal to nb
*
* @param nb Number to find the smallest prime greater than or equal to
* @return Smallest prime number greater than or equal to nb
*/
int my_find_prime_sup(int nb);

/**
* @brief Convert a string to an integer
*
* @param str String to be converted
* @return Converted integer
*/
int my_getnbr(char const *str);

/**
* @brief Check if a number is prime
*
* @param nb Number to be checked
* @return Returns 1 if nb is prime, 0 otherwise
*/
int my_is_prime(int nb);

/**
* @brief Check if a number is negative
*
* @param nb Number to be checked
* @return Returns 1 if nb is negative, 0 otherwise
*/
int my_isneg(int nb);

/**
 * @brief Sets the first n bytes of the memory area pointed to by s
 * to the specified value c.
 *
 * @param s Pointer to the memory area to be filled.
 * @param c Value to be set. The value is passed as an int, but the function
 * converts it to an unsigned char before setting it.
 * @param n Number of bytes to be set to the value.
 * @return A pointer to the memory area s.
 */
void *my_memset(void *s, int c, size_t n);

/**
* @brief Print an integer
*
* @param nb Integer to be printed
*/
int my_put_nbr(int nb);

/**
* @brief Print a character
*
* @param c Character to be printed
*/
void my_putchar(char c);

/**
* @brief Print a character to the standard error output
*
* @param c Character to be printed
*/
void my_putchar_error(char c);

/**
* @brief Print a string
*
* @param str String to be printed
* @return Returns the number of characters printed
*/
int my_putstr(char const *str);

/**
* @brief Print a string to the standard error output
*
* @param str String to be printed
* @return Returns 84
*/
int my_putstr_error(char const *str);

/**
* @brief Reverse a string
*
* @param str String to be reversed
* @return Reversed string
*/
char *my_revstr(char *str);

/**
* @brief Display the given word array
*
* @param tab Word array to be displayed
* @return Returns 0 if the array is empty, 1 otherwise
*/
int my_show_word_array(char *const *tab);

/**
* @brief Display a memory area
*
* @param str Memory area
* @param size Size of the memory area
* @return Returns 0 if size is negative or 1 otherwise
*/
int my_showmem(char const *str, int size);

/**
* @brief Display a string
*
* @param str String to be displayed
* @return Returns 0 if the string is empty, 1 otherwise
*/
int my_showstr(char const *str);

/**
* @brief Sort a string alphabetically
*
* @param str String to be sorted
*/
void my_sort_str(char *str);

/**
* @brief Sort an array of integers in ascending order
*
* @param tab Array of integers to be sorted
* @param size Size of the array
*/
void my_sort_int_array(int *tab, int size);

/**
* @brief Check if a string contains only alphabetical characters
*
* @param str String to be checked
* @return Returns 1 if the string contains only alphabetical characters
*/
int my_str_isalpha(char const *str);

/**
* @brief Check if a string contains only lowercase characters
*
* @param str String to be checked
* @return Returns 1 if the string contains only lowercase characters
*/
int my_str_islower(char const *str);

/**
* @brief Check if a string contains only numerical characters
*
* @param str String to be checked
* @return Returns 1 if the string contains only numerical characters
*/
int my_str_isnum(char const *str);

/**
* @brief Check if a string contains only printable characters
*
* @param str String to be checked
* @return Returns 1 if the string contains only printable characters
*/
int my_str_isprintable(char const *str);

/**
* @brief Check if a string contains only uppercase characters
*
* @param str String to be checked
* @return Returns 1 if the string contains only uppercase characters
*/
int my_str_isupper(char const *str);

/**
* @brief Split a string into words based on a set of separators
*
* @param string String to be split
* @param separators Set of separators
* @return Array of words
*/
char **my_str_to_word_array(char *string, char *separators);

/**
* @brief Capitalize all words in a string
*
* @param str String to be capitalized
* @return Capitalized string
*/
char *my_strcapitalize(char *str);

/**
* @brief Concatenate two strings
*
* @param dest Destination string
* @param src Source string
* @return Concatenated string
*/
char *my_strcat(char *dest, char const *src);

/**
* @brief Compare two strings
*
* @param s1 First string
* @param s2 Second string
*/
int my_strcmp(char const *s1, char const *s2);

/**
* @brief Compare two strings ignoring case
*
* @param s1 First string
* @param s2 Second string
*/
int my_strcmp2(const char *s1, const char *s2);

/**
* @brief Copy a string
*
* @param dest Destination string
* @param src Source string
* @return Copied string
*/
char *my_strcpy(char *dest, char const *src);

/**
* @brief Duplicate a string
*
* @param src String to be duplicated
* @return Duplicated string
*/
char *my_strdup(char const *src);

/**
* @brief Get the length of a string
*
* @param str String to get the length of
* @return Length of the string
*/
int my_strlen(char const *str);

/**
* @brief Convert a string to lowercase
*
* @param str String to be converted
* @return Lowercase string
*/
char *my_strlowcase(char *str);

/**
* @brief Concatenate n characters from src to dest
*
* @param dest Destination string
* @param src Source string
* @param nb Number of characters to concatenate
* @return Concatenated string
*/
char *my_strncat(char *dest, char const *src, int nb);

/**
* @brief Compare two strings up to n characters
*
* @param s1 First string
* @param s2 Second string
* @param n Number of characters to compare
*/
int my_strncmp(char const *s1, char const *s2, int n);

/**
* @brief Copy n characters from src to dest
*
* @param dest Destination string
* @param src Source string
* @param n Number of characters to copy
* @return Copied string
*/
char *my_strncpy(char *dest, char const *src, int n);

/**
* @brief Duplicate a string up to n characters
*
* @param src String to be duplicated
* @param n Number of characters to duplicate
* @return Duplicated string
*/
char *my_strndup(char const *src, int n);

/**
* @brief Find the first occurrence of a substring in a string
*
* @param str String to search
* @param to_find Substring to find
* @return Pointer to the first occurrence of to_find in str, NULL if not found
*/
char *my_strstr(char *str, char const *to_find);

/**
* @brief Convert a string to uppercase
*
* @param str String to be converted
* @return Uppercase string
*/
char *my_strupcase(char *str);

/**
* @brief Swap two integers
*
* @param a First integer
* @param b Second integer
*/
void my_swap(int *a, int *b);

#endif /* MY_H_ */
