/*
** EPITECH PROJECT, 2023
** tests/test_libmy
** File description:
** test_libmy.c
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(concat_params, concat_params_test)
{
    char *argv[] = {"Hello", "World", "Test"};
    char *result = concat_params(3, argv);
    char *expected = "Hello\nWorld\nTest\n";

    cr_assert_str_eq(result, expected, "La concaténation des paramètres est incorrecte");
    free(result);
}

Test(my_arraylen, my_arraylen_test)
{
    char *test_array[] = {"Hello", "World", "Test", NULL};
    int result = my_arraylen(test_array);
    int expected = 3;

    cr_assert_eq(result, expected, "La longueur du tableau est incorrecte");
}

Test(my_char_is_alpha, my_char_is_alpha_test)
{
    char alphabetic_chars[] = {'a', 'A', 'z', 'Z'};
    char non_alphabetic_chars[] = {'1', '-', '*', '\n'};

    for (size_t i = 0; i < sizeof(alphabetic_chars); i++) {
        cr_assert(my_char_is_alpha(alphabetic_chars[i]), "Le caractère '%c' devrait être alphabétique", alphabetic_chars[i]);
    }
    for (size_t i = 0; i < sizeof(non_alphabetic_chars); i++) {
        cr_assert_not(my_char_is_alpha(non_alphabetic_chars[i]), "Le caractère '%c' ne devrait pas être alphabétique", non_alphabetic_chars[i]);
    }
}

Test(my_char_is_num, my_char_is_num_test)
{
    char numeric_chars[] = {'0', '1', '9'};
    char non_numeric_chars[] = {'a', '-', '*', '\n'};

    for (size_t i = 0; i < sizeof(numeric_chars); i++) {
        cr_assert(my_char_is_num(numeric_chars[i]));
    }
    for (size_t i = 0; i < sizeof(non_numeric_chars); i++) {
        cr_assert_not(my_char_is_num(non_numeric_chars[i]));
    }
}

Test(my_compute_power_it, my_compute_power_it_test)
{
    cr_assert_eq(my_compute_power_it(3, 2), 9);
    cr_assert_eq(my_compute_power_it(21, 0), 1);
    cr_assert_eq(my_compute_power_it(-4, -4), 0);
}

Test(my_compute_power_rec, my_compute_power_rec_test)
{
    cr_assert_eq(my_compute_power_rec(3, 2), 9);
    cr_assert_eq(my_compute_power_rec(21, 0), 1);
    cr_assert_eq(my_compute_power_rec(-4, -4), 0);
}

Test(my_compute_square_root, my_compute_square_root_test)
{
    cr_assert_eq(my_compute_square_root(9), 3);
}

Test(my_find_prime_sup, my_find_prime_sup_test)
{
    cr_assert_eq(my_find_prime_sup(9), 11);
    cr_assert(my_find_prime_sup(0));
    cr_assert(my_find_prime_sup(4));
}

Test(my_getnbr, my_getnbr_test)
{
    char str1[] = "123";
    int result1 = my_getnbr(str1);
    int expected1 = 123;
    char str2[] = "-456";
    int result2 = my_getnbr(str2);
    int expected2 = -456;
    char str3[] = "abc";
    int result3 = my_getnbr(str3);
    int expected3 = 0;

    cr_assert_eq(result1, expected1);
    cr_assert_eq(result2, expected2);
    cr_assert_eq(result3, expected3);
}

Test(my_is_prime, my_is_prime_test)
{
    cr_assert_eq(my_is_prime(0), 0);
    cr_assert_eq(my_is_prime(7), 1);
    cr_assert_eq(my_is_prime(9), 0);
}

Test(my_isneg, my_isneg_test)
{
    int negative_number = -5;
    int result1 = my_isneg(negative_number);
    int expected1 = 0;
    int positive_number = 10;
    int result2 = my_isneg(positive_number);
    int expected2 = 1;

    cr_assert_eq(result1, expected1);
    cr_assert_eq(result2, expected2);
}

Test(my_put_nbr, my_put_nbr_test)
{
    int number1 = 123;
    int result1 = my_put_nbr(number1);
    int expected1 = 3;
    cr_assert_eq(result1, expected1);

    int number2 = -456;
    int result2 = my_put_nbr(number2);
    int expected2 = 4;
    cr_assert_eq(result2, expected2);

    int number3 = INT_MIN;
    int result3 = my_put_nbr(number3);
    int expected3 = 11;
    cr_assert_eq(result3, expected3);
}

Test(my_putchar, my_putchar_test)
{
    char c = 'A';
    my_putchar(c);
}

Test(my_putchar_error, my_putchar_error_test)
{
    char c = 'A';
    my_putchar_error(c);
}

Test(my_putstr, my_putstr_test)
{
    char str[] = "Hello, World!";
    my_putstr(str);
}

Test(my_putstr_error, my_putstr_error_test)
{
    char str[] = "Hello, World!";
    my_putstr_error(str);
}

Test(my_show_word_array, my_show_word_array_test)
{
    char *array[] = {"Hello", "World", "Test", NULL};
    my_show_word_array(array);
}

Test(my_showmem, my_showmem_test)
{
    char str[] = "Hello, World!";
    my_showmem(str, 14);
}

Test(my_showstr, my_showstr_test)
{
    char str[] = "Hello, World!";
    my_showstr(str);
}

Test(my_sort_int_array, my_sort_int_array_test)
{
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int size = sizeof(array) / sizeof(array[0]);

    my_sort_int_array(array, size);

    for (int i = 0; i < size - 1; i++) {
        cr_assert(array[i] <= array[i + 1]);
    }
}

Test(my_sort_str, my_sort_str_test)
{
    char str[] = "hello";

    my_sort_str(str);

    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        cr_assert(str[i] <= str[i + 1]);
    }
}

Test(my_str_isalpha, my_str_isalpha_test)
{
    char str1[] = "Hello";
    char str2[] = "Hello123";
    char str3[] = "123";
    char str4[] = "";

    cr_assert_eq(my_str_isalpha(str1), 1);
    cr_assert_eq(my_str_isalpha(str2), 0);
    cr_assert_eq(my_str_isalpha(str3), 0);
    cr_assert_eq(my_str_isalpha(str4), 1);
}

Test(my_str_islower, my_str_islower_test)
{
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "HELLO";
    char str4[] = "";

    cr_assert_eq(my_str_islower(str1), 1);
    cr_assert_eq(my_str_islower(str2), 0);
    cr_assert_eq(my_str_islower(str3), 0);
    cr_assert_eq(my_str_islower(str4), 1);
}

Test(my_str_isnum, my_str_isnum_test)
{
    char str1[] = "123";
    char str2[] = "Hello123";
    char str3[] = "Hello";
    char str4[] = "";

    cr_assert_eq(my_str_isnum(str1), 1);
    cr_assert_eq(my_str_isnum(str2), 0);
    cr_assert_eq(my_str_isnum(str3), 0);
    cr_assert_eq(my_str_isnum(str4), 1);
}

Test(my_str_isprintable, my_str_isprintable_test)
{
    char str1[] = "Hello";
    char str2[] = "Hello\n";
    char str3[] = "Hello\t";
    char str4[] = "";

    cr_assert_eq(my_str_isprintable(str1), 1);
    cr_assert_eq(my_str_isprintable(str2), 0);
    cr_assert_eq(my_str_isprintable(str3), 0);
    cr_assert_eq(my_str_isprintable(str4), 1);
}

Test(my_str_isupper, my_str_isupper_test)
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "hello";
    char str4[] = "";

    cr_assert_eq(my_str_isupper(str1), 1);
    cr_assert_eq(my_str_isupper(str2), 0);
    cr_assert_eq(my_str_isupper(str3), 0);
    cr_assert_eq(my_str_isupper(str4), 1);
}

Test(my_str_to_word_array, my_str_to_word_array_test)
{
    char str[] = "Hello, World! This is a test.";
    char separators[] = " ,.!";

    char **array = my_str_to_word_array(str, separators);

    cr_assert_str_eq(array[0], "Hello");
    cr_assert_str_eq(array[1], "World");
    cr_assert_str_eq(array[2], "This");
    cr_assert_str_eq(array[3], "is");
    cr_assert_str_eq(array[4], "a");
    cr_assert_str_eq(array[5], "test");
    cr_assert_null(array[6]);

    free_array(array);
}

Test(my_strcapitalize, my_strcapitalize_test)
{
    char str1[] = "hello world";
    char str2[] = "hello-world";
    char str3[] = "hello+world";
    char str4[] = "123hello";

    my_strcapitalize(str1);
    my_strcapitalize(str2);
    my_strcapitalize(str3);
    my_strcapitalize(str4);

    cr_assert_str_eq(str1, "Hello World");
    cr_assert_str_eq(str2, "Hello-World");
    cr_assert_str_eq(str3, "Hello+World");
    cr_assert_str_eq(str4, "123hello");
}

Test(my_strcat, my_strcat_test)
{
    char dest[20] = "Hello";
    char src[] = " World!";

    my_strcat(dest, src);

    cr_assert_str_eq(dest, "Hello World!");
}

Test(my_strcmp, my_strcmp_test)
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    char str4[] = "helloworld";

    int result1 = my_strcmp(str1, str2);
    int result2 = my_strcmp(str1, str3);
    int result3 = my_strcmp(str2, str3);
    int result4 = my_strcmp(str3, str4);

    cr_assert_lt(result1, 0);
    cr_assert_gt(result2, -1);
    cr_assert_eq(result3, 1);
    cr_assert_lt(result4, 0);
}

Test(my_strcmp2, my_strcmp2_test)
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    char str4[] = "helloworld";

    int result1 = my_strcmp2(str1, str2);
    int result2 = my_strcmp2(str1, str3);
    int result3 = my_strcmp2(str2, str3);
    int result4 = my_strcmp2(str3, str4);

    cr_assert_eq(result1, 1);
    cr_assert_eq(result2, 0);
    cr_assert_eq(result3, -1);
    cr_assert_eq(result4, 1);
}

Test(my_strdup, my_strdup_test)
{
    char src[] = "Hello, World!";

    char *result = my_strdup(src);

    cr_assert_str_eq(result, src);

    free(result);
}

Test(my_strlen, my_strlen_test)
{
    char str1[] = "Hello, World!";
    char str2[] = "";
    char *str3 = NULL;

    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    int len3 = my_strlen(str3);

    cr_assert_eq(len1, 13);
    cr_assert_eq(len2, 0);
    cr_assert_eq(len3, 0);
}

Test(my_strlowcase, my_strlowcase_test)
{
    char str[] = "HELLO";

    char *result = my_strlowcase(str);

    cr_assert_str_eq(result, "hello");

    cr_assert_eq(result, str);
}

Test(my_strncat, my_strncat_test)
{
    char dest[20] = "Hello";
    char src[] = ", World!";
    int nb = 4;

    char *result = my_strncat(dest, src, nb);

    cr_assert_str_eq(result, "Hello, Wo");

    cr_assert_eq(result, dest);
}

Test(my_strncmp, my_strncmp_test)
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    char str4[] = "Helloworld";

    int result1 = my_strncmp(str1, str2, 3);
    int result2 = my_strncmp(str1, str3, 5);
    int result3 = my_strncmp(str2, str3, 3);
    int result4 = my_strncmp(str3, str4, 5);

    cr_assert_lt(result1, 0);
    cr_assert_eq(result2, 0);
    cr_assert_gt(result3, 0);
    cr_assert_eq(result4, -1);
}

Test(my_strncpy, my_strncpy_test)
{
    char dest[20] = "";
    char src[] = "Hello, World!";
    int n = 5;

    char *result = my_strncpy(dest, src, n);

    cr_assert_str_eq(result, "Hello");

    cr_assert_eq(result, dest);

    cr_assert_eq(dest[n], '\0');
}

Test(my_strndup, my_strndup_test)
{
    char src[] = "Hello, World!";
    int n = 5;

    char *result = my_strndup(src, n);

    cr_assert_str_eq(result, "Hello");

    cr_assert_neq(result, src);

    free(result);
}

Test(my_strstr, my_strstr_test)
{
    char str[] = "Hello, World!";
    char to_find1[] = "World";
    char to_find2[] = "Hello";
    char to_find3[] = "hello";

    char *result1 = my_strstr(str, to_find1);
    char *result2 = my_strstr(str, to_find2);
    char *result3 = my_strstr(str, to_find3);

    cr_assert_str_eq(result1, "World!");
    cr_assert_str_eq(result2, "Hello, World!");
    cr_assert_null(result3);
    my_putchar('\n');
}

Test(my_strupcase, my_strupcase_test)
{
    char str[] = "hello";

    char *result = my_strupcase(str);

    cr_assert_str_eq(result, "HELLO");

    cr_assert_eq(result, str);
}

Test(my_swap, my_swap_test)
{
    int a = 5;
    int b = 10;

    my_swap(&a, &b);

    cr_assert_eq(a, 10);
    cr_assert_eq(b, 5);
}