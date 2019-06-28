NAME := ft_printf
TESTS := tests/
SRC := src/
SRC_CONTROL := src_control/
SRC_NUM_TO_STR := src_num_to_str/
SRC_CHECK := src_check/
SRC_ERROR := src_error/
SRC_WORK := src_work/
SRC_FORMAT := src_format/
SRC_DEPTH_NUM :=src_depth_num/
FT_SIZE_FORMATS := ft_size_formats/
SRC_OTHER := other/
CC := gcc
FLAGS := -g#-Wall -Werror -Wextra
LIB := ./libft/libft.a
SOURCE := -o $(NAME)
INCLUDE := -I.
MAIN := main_ft_printf.c ft_printf.c $(SRC)$(SRC_WORK)ft_work_to_format.c $(SRC)$(SRC_ERROR)ft_error_find.c $(SRC)$(SRC_CONTROL)$(FT_SIZE_FORMATS)ft_size_formats.c $(SRC)$(SRC_CONTROL)ft_control_spec.c $(SRC)$(SRC_CONTROL)ft_control_var.c $(SRC)$(SRC_NUM_TO_STR)ft_base_to_str.c $(SRC)$(SRC_NUM_TO_STR)ft_int_to_str.c $(SRC)$(SRC_NUM_TO_STR)$(SRC_DEPTH_NUM)ft_base_depth.c $(SRC)$(SRC_CONTROL)ft_control_fwa.c $(SRC)$(SRC_WORK)ft_work_fwa.c $(SRC)$(SRC_OTHER)other1.c $(SRC)$(SRC_NUM_TO_STR)ft_str_to_str.c $(SRC)$(SRC_NUM_TO_STR)ft_char_to_str.c $(TESTS)test1.c

$(NAME): all

all:
	@$(CC) $(FLAGS) $(INCLUDE) $(MAIN) $(LIB) $(SOURCE)

clean:
	@/bin/rm -f $(NAME)

re: clean all