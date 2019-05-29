NAME := ft_printf
CC := gcc
FLAGS := -g#-Wall -Werror -Wextra
LIB := ./libft/libft.a
SOURCE := -o $(NAME)
INCLUDE := -I.
MAIN := main.c ft_printf.c

$(NAME): all

all:
	$(CC) $(FLAGS) $(INCLUDE) $(MAIN) $(LIB) $(SOURCE)

clean:
	/bin/rm -f $(NAME)

re: clean all