NAME := libftprintf.a
LIBFT := libft.a
HEADERS := libft.h ft_printf.h
CC := gcc
CFLAGS := -Wall -Wextra -Werror
REMOVE := /bin/rm -rf
DIR_BIN := bin/
DIR_INCLUDE := -I ./include
DIR_LIBFT := libft/
DIR_BUF := buf/
DIR_BONUS := bonus/
DIR_NUM := src_num_to_str/
DIR_SRC := src/
DIRS := $(addprefix $(DIR_SRC), $(DIR_BUF) $(DIR_NUM) $(DIR_BONUS)) $(DIR_SRC)

vpath %.c $(DIRS)
vpath %.o $(DIR_BIN)
vpath %.h $(DIR_INCLUDE)

#ADD DIR PREFIX FOR ALL FILES .c
# SRC_BUF		:= $(addprefix $(DIR_BUF), $(SRC_BUF))
# SRC_BONUS	:= $(addprefix $(DIR_BONUS), $(SRC_BONUS))
# SRC_NUM		:= $(addprefix $(DIR_NUM), $(SRC_NUM))

#ADD SRC PREFIX FOR ALL FILES .c
# MAIN_SRC	:= $(addprefix $(DIR_SRC), $(SRC_MAIN))
# SRC_BUF 	:= $(addprefix $(DIR_SRC), $(SRC_BUF))
# SRC_BONUS	:= $(addprefix $(DIR_SRC), $(SRC_BONUS))
# SRC_NUM		:= $(addprefix $(DIR_SRC), $(SRC_NUM))

# OBJS_FOR_LIB := $(notdir $(OBJS))
# OBJS_FOR_LIB := $(addprefix $(DIR_BIN), $(OBJS_FOR_LIB))

SRC_MAIN 	:= 	ft_printf.c\
					other.c\
					work_spec_form.c\
					work_to_format.c

SRC_BUF 	:= 	buf.c\
					work_buf_by_hand.c

SRC_BONUS 	:= color.c\
					date.c\
					for_date.c\
					invisible_sym.c\
					size_formats.c\
					write_to_file.c

SRC_NUM 	:= base_depth.c\
					base_to_str.c\
					char_to_str.c\
					double_to_str.c\
					int_to_str.c\
					not_spec.c\
					other_spec.c\
					select_num_sys.c\
					str_to_str.c

OBJ1 := $(SRC_MAIN:.c=.o)
OBJ2 := $(SRC_BUF:.c=.o)
OBJ3 := $(SRC_BONUS:.c=.o)
OBJ4 := $(SRC_NUM:.c=.o)

OBJS := $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)
#OBJS := $(notdir $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(DIR_LIBFT)
	cp $(DIR_LIBFT)$(LIBFT) .
	mv $(LIBFT) $(NAME)
	ar rc $(NAME) $(addprefix $(DIR_BIN), $(OBJS))

$(OBJS):%.o:%.c $(HEADERS) dir_obj
	$(CC) -c $< -o $(DIR_BIN)$@ $(DIR_INCLUDE)

dir_obj:
	mkdir -p $(DIR_BIN)

clean:
	$(REMOVE) $(addprefix $(DIR_BIN), $(OBJS))
	$(REMOVE) $(DIR_BIN)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

echo:
	@echo $(OBJS)
	@echo $(DIRS)
	@echo $(SRC_BONUS)

.PHONY: clean fclean re

