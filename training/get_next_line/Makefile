NAME := get_next_line
CC := gcc
FLAGS := -g#-Wall -Werror -Wextra
LIB := -L. -lft
SOURCE := -o $(NAME)
INCLUDE := -I.
MAIN := main.c get_next_line.c

$(NAME): all

all:
	$(CC) $(FLAGS) $(INCLUDE) $(MAIN) $(LIB) $(SOURCE)

clean:
	/bin/rm -f get_next_line

re: clean all
