##
## EPITECH PROJECT, 2023
## lib/myhashtable
## File description:
## Makefile
##

# Directories
INCDIR		=	../../include
LIBDIR		=	../../lib

# Command for removing files
RM			=	rm -rf

SRC			=	create_hashtable.c			\
				delete.c					\
				delete_hashtable.c			\
				dump.c						\
				hash.c						\
				insert.c					\
				myhashtable_put_nbr.c		\
				myhashtable_putchar.c		\
				myhashtable_strdup.c		\
				myhashtable_strlen.c		\
				search.c

OBJ			=	$(SRC:%.c=%.o)

CFLAGS		=	-Wall

INCLUDE		=	myhashtable.h

NAME		=	libmyhashtable.a

all: libmyhashtable copy

libmyhashtable: $(OBJ)
		@ar rc $(NAME) $(OBJ)

copy: libmyhashtable
		@cp $(INCLUDE) $(INCDIR)/$(INCLUDE)
		@cp $(NAME) $(LIBDIR)/$(NAME)

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(LIBDIR)/$(NAME)
		@$(RM) $(LIBDIR)/my/$(NAME)

re: fclean all

.PHONY: all directory libmy copy clean fclean re
