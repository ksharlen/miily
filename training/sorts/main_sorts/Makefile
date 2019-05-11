# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 08:18:00 by ksharlen          #+#    #+#              #
#    Updated: 2019/04/30 08:25:28 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := main
SRC := ./ft_other.c ./sorts.c
MAIN := main.c
CC := gcc
FLAGS := -Werror -Wextra -Wall

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I. $(SRC) $(MAIN) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all

