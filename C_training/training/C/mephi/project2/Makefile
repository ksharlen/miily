# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/25 10:54:26 by ksharlen          #+#    #+#              #
#    Updated: 2019/06/27 08:52:23 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc -g
SRC := src/
MAIN := $(SRC)main.c $(SRC)ft_list.c $(SRC)ft_malloc.c $(SRC)ft_input.c
INCLUDE := -I ./include
LIB := lib/libft.a
OBJ := -o main

all:
	$(CC) $(INCLUDE) $(MAIN) $(LIB) $(OBJ)

clean:
	/bin/rm -f main

re: clean all