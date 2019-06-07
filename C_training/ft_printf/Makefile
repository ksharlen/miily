NAME := ft_printf
SRC := src/
SRC_CONTROL := src_control/
SRC_CHECK := src_check/
SRC_ERROR := src_error/
FT_SIZE_FORMATS := ft_size_formats/
CC := gcc
FLAGS := -g#-Wall -Werror -Wextra
LIB := ./libft/libft.a
SOURCE := -o $(NAME)
INCLUDE := -I.
MAIN := main_ft_printf.c ft_printf.c $(SRC)$(SRC_ERROR)ft_error_find.c $(SRC)$(SRC_CONTROL)$(FT_SIZE_FORMATS)ft_size_formats.c

$(NAME): all

all:
	$(CC) $(FLAGS) $(INCLUDE) $(MAIN) $(SRC)$(SRC_CONTROL)ft_work_to_format.c $(LIB) $(SOURCE)

clean:
	/bin/rm -f $(NAME)

re: clean all