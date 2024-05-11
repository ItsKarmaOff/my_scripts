##
## EPITECH PROJECT, 2024
## project_name
## File description:
## Makefile
##

PROJECT		=	project_name

NAME		=	binary_name

ARGS		=	""

CC		=	gcc

CFLAGS		=	-Wextra -I./include

DEBUGFLAGS	=	-g3

OPTIMIZEFLAGS	=	-O3

# Valgrind flags and output file
VALGRINDFLAGS	=	--leak-check=full --show-leak-kinds=all --track-origins=yes
OUTPUT		=	valgrind.log

# Flags for CSFML
CSFMLFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

# Flags for NCURSES
NCURSESFLAGS	=	-lncurses

# Flags for Criterion
CRITERIONFLAGS	=	--coverage -lcriterion

# Directories
SRCDIR		=	src
INCDIR		=	include
LIBDIR		=	lib
LIBMYDIR	=	$(LIBDIR)/my
LIBMYPRINTFDIR	=	$(LIBDIR)/myprintf
LIBMYHASHTABLEDIR	=	$(LIBDIR)/myhashtable

# Libraries
LIBS		=	-L$(LIBDIR) -lmy -lmyprintf

# Sources
SRC		=	$(SRCDIR)/main.c

# Objects
OBJ		=	$(SRC:%.c=%.o)

# Includes
INC		=	-I$(INCDIR)

# Command for removing files
RM		=	rm -rf

all:	libmy libmyprintf libmyhashtable project

# Build the object files from the sources
%.o:	%.c
		@$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Build and compile the project
project:	$(OBJ)
		@echo -e "\033[0;33mBuilding $(PROJECT)...\033[0m"
		@echo -e "\033[0;34mCompiling...\033[0m"
		@$(CC) $(OBJ) -o $(NAME) $(LIBS)
		@echo -e "\033[1;32mCompleted\033[0m"

# Rebuild and recompile the project with debug flags
debug:		fclean directory libmy libmyprintf $(OBJ)
		@echo -e "\033[0;33mBuilding $(PROJECT) in debug mode...\033[0m"
		@echo -e "\033[0;34mCompiling...\033[0m"
		@$(CC) $(OBJ) -o $(NAME) $(LIBS) $(DEBUGFLAGS)
		@echo -e "\033[1;32mCompleted\033[0m"

# Rebuild and recompile the project with optimized flags
optimize:	fclean directory libmy libmyprintf $(OBJ)
		@echo -e "\033[0;33mBuilding $(PROJECT) in optimized mode...\033[0m"
		@echo -e "\033[0;34mCompiling...\033[0m"
		@$(CC) $(OBJ) -o $(NAME) $(LIBS) $(OPTIMIZEFLAGS)
		@echo -e "\033[1;32mCompleted\033[0m"

# Execute valgrind on the project
valgrind:	debug
		@echo -e "\033[0;36mExecuting valgrind...\033[0m"
		@valgrind $(VALGRINDFLAGS) ./$(NAME) 2> $(OUTPUT)

# Execute the program
run:		all
		@echo -e "\033[0;36mRunning the program...\033[0m"
		@./$(NAME)

# Execute the program with arguments
runargs:	all
		@echo -e "\033[0;36mRunning the program with arguments...\033[0m"
		@./$(NAME) $(ARGS)

# Execute the libmy and libmyprintf Makefile
libmy:
		@echo -e "\033[0;33mBuilding libmy...\033[0m"
		@$(MAKE) --no-print-directory -s -C $(LIBMYDIR)

libmyprintf:
		@echo -e "\033[0;33mBuilding libmyprintf...\033[0m"
		@$(MAKE) --no-print-directory -s -C $(LIBMYPRINTFDIR)

libmyhashtable:
		@echo -e "\033[0;33mBuilding libmyhashtable...\033[0m"
		@$(MAKE) --no-print-directory -s -C $(LIBMYHASHTABLEDIR)

# Execute and display the coding style checker
codingstyle:
		@$(MAKE) fclean --no-print-directory -s
		@echo -e "\033[0;36mChecking the coding style...\033[0m"
		@coding-style . . > /dev/null 2>&1
		@echo -e "\033[0;36mDisplay coding-style-reports.log...\033[0m"
		@./scripts/display_codingstyle.sh
		@yes | rm -f coding-style-reports.log

# Execute the unit tests and display the coverage
tests_run:
		@make tests_run --no-print-directory -s -C./tests/
		@echo -e "\033[0;36mExecuting unit gcovr...\033[0m"
		@gcovr
		@echo -e "\033[1;32mCompleted\033[0m"

# Clean object files from the project and the libraries
clean:
		@echo -e "\033[0;31mCleaning object files...\033[0m"
		@$(MAKE) clean --no-print-directory -C $(LIBMYDIR)
		@$(MAKE) clean --no-print-directory -C $(LIBMYPRINTFDIR)
		@$(MAKE) clean --no-print-directory -C $(LIBMYHASHTABLEDIR)
		@echo -e "\033[0;31mCleaning tests...\033[0m"
		@$(MAKE) clean --no-print-directory -C ./tests/
		@$(RM) $(OBJ)

# Clean object files and the binary from the project and the libraries
fclean:		clean
		@echo -e "\033[0;31mCleaning libs...\033[0m"
		@$(MAKE) fclean --no-print-directory -C $(LIBMYDIR)
		@$(MAKE) fclean --no-print-directory -C $(LIBMYPRINTFDIR)
		@$(MAKE) fclean --no-print-directory -C $(LIBMYHASHTABLEDIR)
		@echo -e "\033[0;31mCleaning unit_tests...\033[0m"
		@$(MAKE) fclean --no-print-directory -C ./tests/
		@echo -e "\033[0;31mCleaning $(NAME)...\033[0m"
		@$(RM) $(NAME)
		@echo -e "\033[1;32mCompleted\033[0m"

# Rebuilt the project
re:		fclean all

.PHONY:		all directory project debug optimize valgrind libmy libmyprintf \
		codingstyle clean fclean re
