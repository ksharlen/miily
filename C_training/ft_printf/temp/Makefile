NAME := main
src := $(wildcard *.c)
obj := $(src:.c=.o)
dir_obj := bin/
#include := ../include

vpath %.h ../include
vpath %.o $(dir_obj)

all: $(NAME)

$(NAME): $(obj)
	make -C ../
	gcc $(addprefix $(dir_obj), $(obj)) libftprintf.a -o $@ -I ../include

$(obj): %.o:%.c ft_printf.h | $(dir_obj)
	gcc -c $< -o $(dir_obj)$@ -I ../include

$(dir_obj):
	mkdir -p $@

clean:
	rm -rf $(addprefix $(dir_obj), $(obj))
	rm -rf $(dir_obj)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re