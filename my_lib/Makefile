# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 14:32:05 by ksharlen          #+#    #+#              #
#    Updated: 2019/07/14 13:35:27 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
FLAGS := -Wextra -Werror -Wall
SRC := $(wildcard *.c)
CC := gcc
OBJ := $(SRC:.c=.o)
REMOVE := /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

$(OBJ): %.o: %.c
	@$(CC) $(FLAGS) -c $^ -I .

copymac: re
	@cp libft.a libft.h ../C_training/ft_printf/libft
	@cp libft.a libft.h ../C_training/ft_ls/libft
	@echo "copy success!!!!"

copylinux: re
	@cp libft.a libft.h ../C_training/ft_printf/libft
	@cp libft.a libft.h ../C_training/ft_ls/libft
	@echo "copy success!!!!"
