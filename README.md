# Bash Scripts and Templates for "my" and "myprintf" Libraries

This repository contains a set of Bash scripts as well as templates for the "my" and "myprintf" libraries, aimed at simplifying the development and usage process of these tools.

## Repository Contents

1. **Bash Scripts**:
    - `cat_private_ssh_key [KEY_NAME]`: Displays the private key given as a parameter in the terminal.
    - `cat_public_ssh_key [KEY_NAME]`: Displays the public key given as a parameter in the terminal.
    - `clean_github_repos_name`: Automatically renames all your Epitech GitHub repositories to `Project Name` in the script execution directory.
    - `clone_github_repos`: Clones all your GitHub repositories listed in the script into the script execution directory.
    - `count_files.sh`: Counts the number of files present in the script execution directory.
    - `display_codingstyle.sh`: Displays the Epitech coding-style error report with better readability.
    - `find_sh.sh`: Description of script 6.
    - `gen_ssh_key [EMAIL] [KEY_NAME]`: Generates an SSH key in `home/.ssh/key_name`.
    - `gotta_catch_them_all.sh`: Description of script 8.
    - `how_many_are_we.sh`: Description of script 9.
    - `install_epitech_dump.sh`: Installs all prerequisites for Epitech.
    - `looneytised.sh`: Description of script 11.
    - `mkproject.sh [PROJECT_NAME] [BINARY_NAME]`: Creates a folder with everything needed to start an Epitech project.
    - `mr_clean`: Deletes all temporary files and folders.
    - `push_that.sh [MESSAGE]`: Pushes all files to the current repository with a given message as a parameter.
    - `r_tacpy.sh`: Description of script 15.
    - `setup_my_os`: Uses other scripts to configure your Linux after a reinstallation or initial installation.
    - `skip.sh`: Description of script 17.
    - `updatelib [PROJECT]`: Updates the library of a project.

2. **"my" Library**:
    - `concat_params.c`: Concatenates all the arguments passed.
    - `my_arraylen.c`: Gets the length of a two-dimensional array.
    - `my_char_is_alpha.c`: Checks if a character is an alphabetical character.
    - `my_char_is_num.c`: Checks if a character is a numerical character.
    - `my_compute_power_it.c`: Calculates the power of a number iteratively.
    - `my_compute_power_rec.c`: Calculates the power of a number recursively.
    - `my_compute_square_root.c`: Calculates the square root of a number.
    - `my_find_prime_sup.c`: Finds the smallest prime number greater than or equal to nb.
    - `my_free_array.c`: Frees a two-dimensional array.
    - `my_getnbr.c`: Converts a string to an integer.
    - `my_is_prime.c`: Checks if a number is prime.
    - `my_isneg.c`: Checks if a number is negative.
    - `my_memset.c`: Sets the first n bytes of the memory area pointed to by s to the specified value c.
    - `my_put_nbr.c`: Prints an integer.
    - `my_putchar.c`: Prints a character.
    - `my_putstr.c`: Prints a string.
    - `my_revstr.c`: Reverses a string.
    - `my_show_word_array.c`: Displays the given word array.
    - `my_showmem.c`: Displays a memory area.
    - `my_showstr.c`: Displays a string.
    - `my_sort_int_array.c`: Sorts an array of integers in ascending order.
    - `my_sort_str.c`: Sorts a string alphabetically.
    - `my_str_isalpha.c`: Checks if a string contains only alphabetical characters.
    - `my_str_islower.c`: Checks if a string contains only lowercase characters.
    - `my_str_isnum.c`: Checks if a string contains only numerical characters.
    - `my_str_isprintable.c`: Checks if a string contains only printable characters.
    - `my_str_isupper.c`: Checks if a string contains only uppercase characters.
    - `my_str_to_word_array.c`: Splits a string into words based on a set of separators.
    - `my_strcapitalize.c`: Capitalizes all words in a string.
    - `my_strcat.c`: Concatenates two strings.
    - `my_strcmp.c`: Compares two strings.
    - `my_strcmp2.c`: Compares two strings ignoring case and order.
    - `my_strcpy.c`: Copies a string.
    - `my_strdup.c`: Duplicates a string.
    - `my_strlen.c`: Gets the length of a string.
    - `my_strlowcase.c`: Converts a string to lowercase.
    - `my_strncat.c`: Concatenates n characters from src to dest.
    - `my_strncmp.c`: Compares two strings up to n characters.
    - `my_strncpy.c`: Copies n characters from src to dest.
    - `my_strndup.c`: Duplicates a string up to n characters.
    - `my_strstr.c`: Finds the first occurrence of a substring in a string.
    - `my_strupcase.c`: Converts a string to uppercase.
    - `my_swap.c`: Swaps two integers.

3. **"myprintf" Library**:
    - `my_printf.c`: Description of file 1.
    - `my_printf_put_nbr.c`: Description of file 2.
    - `my_printf_putchar.c`: Description of file 3.
    - `my_printf_putnbr_base_unsigned.c`: Description of file 4.
    - `my_printf_putnbr_double.c`: Description of file 5.
    - `my_printf_putnbr_long_long.c`: Description of file 6.
    - `my_printf_putnbr_sct.c`: Description of file 7.
    - `my_printf_putstr.c`: Description of file 8.
    - `my_printf_revstr.c`: Description of file 9.
    - `my_printf_strlen.c`: Description of file 10.
    - `my_specifier_c.c`: Description of file 11.
    - `my_specifier_capital_e.c`: Description of file 12.
    - `my_specifier_capital_e_g.c`: Description of file 13.
    - `my_specifier_capital_f.c`: Description of file 14.
    - `my_specifier_capital_f_g.c`: Description of file 15.
    - `my_specifier_capital_g.c`: Description of file 16.
    - `my_specifier_capital_x.c`: Description of file 17.
    - `my_specifier_d.c`: Description of file 18.
    - `my_specifier_e.c`: Description of file 19.
    - `my_specifier_e_g.c`: Description of file 20.
    - `my_specifier_f.c`: Description of file 21.
    - `my_specifier_f_g.c`: Description of file 22.
    - `my_specifier_g.c`: Description of file 23.
    - `my_specifier_i.c`: Description of file 24.
    - `my_specifier_n.c`: Description of file 25.
    - `my_specifier_o.c`: Description of file 26.
    - `my_specifier_p.c`: Description of file 27.
    - `my_specifier_perc.c`: Description of file 28.
    - `my_specifier_s.c`: Description of file 29.
    - `my_specifier_u.c`: Description of file 30.
    - `my_specifier_x.c`: Description of file 31.

## Usage

### Bash Scripts

To use the Bash scripts, follow these steps:

1. Clone this repository to your local machine.
2. Execute the desired script using the command `./script_name.sh`.

---
Created by [Christophe VANDEVOIR](https://github.com/ItsKarmaOff)
