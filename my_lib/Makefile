# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/06 14:32:05 by ksharlen          #+#    #+#              #
#    Updated: 2019/07/09 09:53:08 by ksharlen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
FLAGS := -Wextra -Werror -Wall
CFILES := ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_strlcat.c ft_striter.c ft_isspace.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_pow.c ft_revers.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c  ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstadd_end.c ft_lstmap.c ft_strnlen.c ft_lstfreeone.c ft_lstelem.c ft_lstsize.c ft_arrfind.c ft_lstreplace.c ft_strnjoin.c ft_memsub.c ft_memnjoin.c ft_memnlen.c get_next_line.c ft_ischar.c ft_isstr.c ft_memischar.c ft_memisstr.c ft_swap.c ft_size_num.c
CC := gcc
OBJ := ${CFILES:c=o}

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

$(OBJ): $(CFILES)
	$(CC) $(FLAGS) -c $(CFILES) -I .

copymac: re
	@cp libft.a libft.h ../C_training/ft_printf/libft
	@cp libft.a libft.h ../C_training/ft_ls/libft
	@echo "copy success!!!!"

copylinux: re
	@cp libft.a libft.h ../C_training/ft_printf/libft
	@cp libft.a libft.h ../C_training/ft_ls/libft
	@echo "copy success!!!!"

copytraining: re
	@cp libft.a libft.h ../C_training/training/OS/libft/
	@echo "copy success!!!!"

copyproject2: re
	@cp libft.a libft.h ../C_training/training/C/mephi/project2/lib/
	@echo "copy success!!!"