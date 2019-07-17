NAME := utf-8
src := main.c utf-8.c
obj := $(src:.c=.o)
dir_bin := bin/

vpath %.o $(dir_bin)

all: $(NAME)

$(NAME): $(obj)
	gcc $(addprefix $(dir_bin), $(obj)) -o $(NAME) -I.

$(obj):%.o:%.c main.h | $(dir_bin)
	gcc -c $< -o $(dir_bin)$@

$(dir_bin):
	mkdir -p $@

clean:
	rm -rf $(obj)
	rm -rf $(dir_bin)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SILENT: all $(NAME) $(obj) $(dir_bin) clean fclean re