# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 14:32:05 by ksharlen          #+#    #+#              #
#    Updated: 2019/04/07 13:35:46 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := source
FLAGS := -Wextra -Werror -Wall
INCLUDES := ./includes
SRCS := ./srcs/
MEM := $(SRCS)mem_fun/
STR := $(SRCS)str_fun/
OTH := $(SRCS)other_fun/
FUNCTION := $(MEM)ft_memset.c $(OTH)ft_test_functions_one.c $(MEM)ft_bzero.c $(MEM)ft_memcpy.c $(MEM)ft_memccpy.c $(MEM)ft_memmove.c  $(MEM)ft_memchr.c $(MEM)ft_memcmp.c $(STR)ft_strlen.c $(STR)ft_strdup.c $(STR)ft_strcpy.c $(STR)ft_strncpy.c $(STR)ft_strcat.c $(STR)ft_strncat.c $(STR)ft_strchr.c $(STR)ft_strrchr.c $(STR)ft_strstr.c $(STR)ft_strnstr.c $(STR)ft_strcmp.c $(STR)ft_strncmp.c $(STR)ft_atoi.c
MAIN := ./main/

all:
	@gcc $(FLAGS) -I $(INCLUDES) $(MAIN)main_atoi.c $(FUNCTION) -o $(NAME)

clean:


fclean:


re:


