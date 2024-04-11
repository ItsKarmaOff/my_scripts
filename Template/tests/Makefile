##
## EPITECH PROJECT, 2023
## tests
## File description:
## Makefile
##

NAME		=	unit_tests

SRCS		=	../lib/my/concat_params.c	\
				../lib/my/my_arraylen.c		\
				../lib/my/my_char_is_alpha.c	\
				../lib/my/my_char_is_num.c	\
				../lib/my/my_compute_power_it.c	\
				../lib/my/my_compute_power_rec.c	\
				../lib/my/my_compute_square_root.c	\
				../lib/my/my_find_prime_sup.c	\
				../lib/my/my_getnbr.c	\
				../lib/my/my_is_prime.c	\
				../lib/my/my_isneg.c	\
				../lib/my/my_put_nbr.c	\
				../lib/my/my_putchar.c	\
				../lib/my/my_putstr.c	\
				../lib/my/my_show_word_array.c	\
				../lib/my/my_showmem.c	\
				../lib/my/my_showstr.c	\
				../lib/my/my_sort_int_array.c	\
				../lib/my/my_sort_str.c	\
				../lib/my/my_str_isalpha.c	\
				../lib/my/my_str_islower.c	\
				../lib/my/my_str_isnum.c	\
				../lib/my/my_str_isprintable.c	\
				../lib/my/my_str_isupper.c	\
				../lib/my/my_str_to_word_array.c	\
				../lib/my/my_strcapitalize.c	\
				../lib/my/my_strcat.c	\
				../lib/my/my_strcmp.c	\
				../lib/my/my_strcmp2.c	\
				../lib/my/my_strcpy.c	\
				../lib/my/my_strdup.c	\
				../lib/my/my_strlen.c	\
				../lib/my/my_strlowcase.c	\
				../lib/my/my_strncat.c	\
				../lib/my/my_strncmp.c	\
				../lib/my/my_strncpy.c	\
				../lib/my/my_strndup.c	\
				../lib/my/my_strstr.c	\
				../lib/my/my_strupcase.c	\
				../lib/my/my_swap.c	\

TESTS		=	test_libmy.c

CFLAGS		=	-Werror -Wall -Wextra -I../include/
CRITERIONFLAGS		= 	--coverage -lcriterion -lgcov

LIBS 	=	-L../lib/ -lmy

# Command for removing files
RM		=	rm -rf

$(NAME):	fclean libs
	@echo -e "\033[0;34mCompiling...\033[0m"
	@$(CC) -o $(NAME) $(TESTS) $(SRCS) $(CFLAGS) $(CRITERIONFLAGS) $(LIBS)
	@cp $(NAME) ../

libs:
	@make --no-print-directory -C ../lib/my
	@echo -e "\033[0;33mBuilding libmy...\033[0m"

tests_run: $(NAME)
	@echo -e "\033[0;36mExecuting unit tests...\033[0m"
	@./$(NAME) > /dev/null 2>&1

clean:
	@$(RM) *.gcda
	@$(RM) *.gcno

fclean:	clean
	@$(RM) $(NAME)
	@$(RM) ../$(NAME)
