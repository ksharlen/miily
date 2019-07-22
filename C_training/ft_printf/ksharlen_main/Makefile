
NAME := main
src := main.c other_test.c test_int.c test_string.c
OBJ := $(src:.c=.o)
bin := bin/
cinclude := ../include
remove := /bin/rm -rf
header := ft_printf.h testing.h
tests := tests/
lib := libftprintf.a
CFLAGS := -w -g

vpath %.c . $(tests)
vpath %.o $(bin)
vpath %.h $(cinclude)

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../
	gcc $(CFLAGS) $(addprefix $(bin), $(OBJ)) $(lib) -pipe -I $(cinclude) -o $(NAME)

$(OBJ):%.o:%.c $(header) | $(bin)
	gcc -c $(CFLAGS) $< -o $(bin)$@ -I $(cinclude) -pipe

$(bin):
	mkdir -p $@

clean:
	$(remove) $(addprefix $(bin), $(OBJ))
	$(remove) $(bin)

fclean: clean
	$(remove) $(name)

re: fclean all

echo:
	@echo $(OBJ)
	@echo $(tests)

.PHONY: clean fclean re echo