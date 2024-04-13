##
## EPITECH PROJECT, 2023
## lib/my
## File description:
## Makefile
##

# Directories
OBJDIR		=	../../obj
INCDIR		=	../../include
LIBDIR		=	../../lib

# Commands for creating directories
MKDIR_P		=	mkdir -p

# Command for removing files
RM			=	rm -rf

SRC			=	my_putchar.c				\
				concat_params.c				\
				my_arraylen.c				\
				my_char_is_alpha.c			\
				my_char_is_num.c			\
				my_compute_power_it.c		\
				my_isneg.c					\
				my_memset.c					\
				my_put_nbr.c				\
				my_strdup.c					\
				my_strndup.c				\
				my_swap.c					\
				my_putstr.c					\
				my_strlen.c					\
				my_getnbr.c					\
				my_sort_str.c				\
				my_sort_int_array.c			\
				my_str_to_word_array.c		\
				my_show_word_array.c		\
				my_compute_power_rec.c		\
				my_compute_square_root.c	\
				my_is_prime.c				\
				my_find_prime_sup.c			\
				my_free_array.c				\
				my_strcpy.c					\
				my_strncpy.c				\
				my_revstr.c					\
				my_strstr.c					\
				my_strcmp.c					\
				my_strcmp2.c				\
				my_strncmp.c				\
				my_strupcase.c				\
				my_strlowcase.c				\
				my_strcapitalize.c			\
				my_str_isalpha.c			\
				my_str_isnum.c				\
				my_str_islower.c			\
				my_str_isupper.c			\
				my_str_isprintable.c		\
				my_showstr.c				\
				my_showmem.c				\
				my_strcat.c					\
				my_strncat.c				\
				my_printf.c							\
				my_printf_put_nbr.c					\
				my_printf_putchar.c					\
				my_printf_putnbr_base_unsigned.c	\
				my_printf_putnbr_double.c			\
				my_printf_putnbr_long_long.c		\
				my_printf_putnbr_sct.c				\
				my_printf_putstr.c					\
				my_printf_revstr.c					\
				my_printf_strlen.c					\
				my_specifier_c.c					\
				my_specifier_capital_e_g.c			\
				my_specifier_capital_e.c			\
				my_specifier_capital_f_g.c			\
				my_specifier_capital_f.c			\
				my_specifier_capital_g.c			\
				my_specifier_capital_x.c			\
				my_specifier_d.c					\
				my_specifier_e_g.c					\
				my_specifier_e.c					\
				my_specifier_f_g.c					\
				my_specifier_f.c					\
				my_specifier_g.c					\
				my_specifier_i.c					\
				my_specifier_n.c					\
				my_specifier_o.c					\
				my_specifier_p.c					\
				my_specifier_perc.c					\
				my_specifier_s.c					\
				my_specifier_u.c					\
				my_specifier_x.c

OBJ			=	$(addprefix $(OBJDIR)/,$(SRC:.c=.o))

CFLAGS		=	-Wall

INCLUDE		=	myprintf.h

NAME		=	libmyprintf.a

all: libmyprintf copy

directory:
		@$(MKDIR_P) $(OBJDIR)

$(OBJDIR)/%.o: %.c | directory
		@$(CC) $(CFLAGS) -c $< -o $@

libmyprintf: $(OBJ)
		@ar rc $(NAME) $(OBJ)

copy: libmyprintf
		@cp $(INCLUDE) $(INCDIR)/$(INCLUDE)
		@cp $(NAME) $(LIBDIR)/$(NAME)

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(LIBDIR)/$(NAME)
		@$(RM) $(LIBDIR)/myprintf/$(NAME)

re: fclean all

.PHONY: all directory libmyprintf copy clean fclean re
