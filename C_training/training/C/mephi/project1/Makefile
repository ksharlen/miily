# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 00:29:52 by ksharlen          #+#    #+#              #
#    Updated: 2019/06/21 14:02:25 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc -g
SRC := src/
MAIN := $(SRC)main.c $(SRC)ft_input.c $(SRC)ft_malloc.c $(SRC)ft_output.c $(SRC)ft_work.c
INCLUDE := -I ./include
OBJ := -o ./bin/main

all:
	$(CC) $(INCLUDE) $(MAIN) $(OBJ)

clean:
	/bin/rm -f

re: clean all