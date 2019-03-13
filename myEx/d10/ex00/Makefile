# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile-1                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/12 07:02:12 by ksharlen          #+#    #+#              #
#    Updated: 2019/03/12 14:34:24 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := ./srcs/
INCLUDES := ./includes
SOURCES := $(SRCS)ft_putchar.c $(SRCS)ft_strcmp.c $(SRCS)ft_swap.c $(SRCS)ft_putstr.c $(SRCS)ft_strlen.c
OBJECTIVE := ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o

all:
	gcc -c $(SOURCES) -I $(INCLUDES)
	ar rc libft.a $(OBJECTIVE)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECTIVE)

fclean:
	/bin/rm -f libft.a

re: fclean all
