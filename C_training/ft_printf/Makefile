NAME := ft_printf
SRC := src/
SRC_CONTROL := src_control/
CC := gcc
FLAGS := -g#-Wall -Werror -Wextra
LIB := ./libft/libft.a
SOURCE := -o $(NAME)
INCLUDE := -I.
MAIN := main.c ft_printf.c

$(NAME): all

all:
	$(CC) $(FLAGS) $(INCLUDE) $(MAIN) $(SRC)$(SRC_CONTROL)ft_work_to_format.c $(LIB) $(SOURCE)

clean:
	/bin/rm -f $(NAME)

re: clean all