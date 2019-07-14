NAME := ft_printf
TESTS := tests/
SRC := src/
SRC_CONTROL := src_control/
SRC_DATE := date/
SRC_NUM_TO_STR := src_num_to_str/
SRC_CHECK := src_check/
SRC_ERROR := src_error/
SRC_WORK := src_work/
SRC_FORMAT := src_format/
SRC_DEPTH_NUM :=src_depth_num/
SRC_BUF := buf/
FT_SIZE_FORMATS := ft_size_formats/
SRC_OTHER := other/
CC := gcc
FLAGS := -g -w#-Wall -Werror -Wextra
LIB := ./libft/libft.a
SOURCE := -o $(NAME)
INCLUDE := -I.
MAIN := main_ft_printf.c ft_printf.c $(SRC)$(SRC_WORK)work_to_format.c $(SRC)$(SRC_CONTROL)$(FT_SIZE_FORMATS)ft_size_formats.c $(SRC)$(SRC_CONTROL)ft_control_spec.c $(SRC)$(SRC_NUM_TO_STR)base_to_str.c $(SRC)$(SRC_NUM_TO_STR)int_to_str.c $(SRC)$(SRC_NUM_TO_STR)$(SRC_DEPTH_NUM)base_depth.c $(SRC)$(SRC_OTHER)other1.c $(SRC)$(SRC_NUM_TO_STR)str_to_str.c $(SRC)$(SRC_NUM_TO_STR)char_to_str.c $(TESTS)test1.c $(SRC)$(SRC_BUF)buf.c $(SRC)$(SRC_NUM_TO_STR)other_spec.c $(SRC)$(SRC_NUM_TO_STR)select_num_sys.c $(SRC)$(SRC_NUM_TO_STR)double_to_str.c $(SRC)$(SRC_OTHER)color.c $(SRC)$(SRC_OTHER)invisible_sym.c $(SRC)$(SRC_NUM_TO_STR)not_spec.c $(SRC)$(SRC_BUF)work_buf_by_hand.c $(TESTS)test_long.c $(TESTS)test_int.c $(TESTS)test_string.c $(TESTS)other_test.c $(SRC)$(SRC_OTHER)$(SRC_DATE)date.c $(SRC)$(SRC_OTHER)$(SRC_DATE)for_date.c

$(NAME):
	@$(CC) $(FLAGS) $(INCLUDE) $(MAIN) $(LIB) $(SOURCE)

all: $(NAME)

clean:
	@/bin/rm -f $(NAME)

re: clean $(NAME)