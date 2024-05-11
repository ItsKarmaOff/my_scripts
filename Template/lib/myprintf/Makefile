##
## EPITECH PROJECT, 2023
## lib/my
## File description:
## Makefile
##

# Directories
INCDIR		=	../../include
LIBDIR		=	../../lib

# Command for removing files
RM			=	rm -rf

SRC			=	my_printf.c							\
				my_printf_put_nbr.c					\
				my_printf_putchar.c					\
				my_printf_putnbr_base_unsigned.c	\
				my_printf_putnbr_double.c			\
				my_printf_putnbr_long_long.c		\
				my_printf_putnbr_sct.c				\
				my_printf_putstr.c					\
				my_printf_revstr.c					\
				my_printf_strlen.c					\
				my_specifier_c.c						\
				my_specifier_capital_e_g.c			\
				my_specifier_capital_e.c				\
				my_specifier_capital_f_g.c			\
				my_specifier_capital_f.c				\
				my_specifier_capital_g.c				\
				my_specifier_capital_x.c				\
				my_specifier_d.c						\
				my_specifier_e_g.c					\
				my_specifier_e.c						\
				my_specifier_f_g.c					\
				my_specifier_f.c						\
				my_specifier_g.c						\
				my_specifier_i.c						\
				my_specifier_n.c						\
				my_specifier_o.c						\
				my_specifier_p.c						\
				my_specifier_perc.c					\
				my_specifier_s.c						\
				my_specifier_u.c						\
				my_specifier_x.c

OBJ			=	$(SRC:%.c=%.o)

CFLAGS		=	-Wall

INCLUDE		=	myprintf.h

NAME		=	libmyprintf.a

all: libmyprintf copy

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
