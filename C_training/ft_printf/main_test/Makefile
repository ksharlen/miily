NAME := ft_printf
LIBFT := libft.a
DIR_LIBFT := ../libft/
source_dirs := bonus buf src_num_to_str .
source_dirs := $(addprefix ../src/, $(source_dirs)) .
source_files := $(wildcard $(addsuffix /*.c, $(source_dirs)))
object_files := $(source_files:.c=.o)
object_files := $(notdir $(object_files))
remove := /bin/rm -f
FLAGS := -g
CC := gcc

VPATH := $(source_dirs)

all: $(NAME)

$(NAME): $(object_files)
	make -C $(DIR_LIBFT)
	mv $(DIR_LIBFT)$(LIBFT) .
	$(CC) $(FLAGS) $(object_files) $(LIBFT) -o $(NAME) -I ../include

$(object_files):%.o: %.c
	$(CC) $(FLAGS) -c $^ -I ../include

clean:
	$(remove) $(object_files)

fclean: clean
	$(remove) $(NAME)

echo:
	@echo $(source_dirs)
	@echo $(source_files)
	@echo $(object_files)

re: fclean all