/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 00:29:54 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/20 23:02:57 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define ERR_GET_INT "Error! Scanf does not work\n"
# define ERR_MEM "Memory does not allocated\n"
# define SIZE 100
# define MOD_NUM(x) ((x) = ((x) > 0) ? (x) : -(x))

typedef struct		s_line
{
	int				size_line;
	int				*num;
}					t_line;

typedef struct		s_matrix
{
	int				num_list;
	t_line			*elem;
}					t_matrix;

void				ft_error(char *s);
int					ft_get_int(int *one);
int					ft_input_data(t_matrix *elem);
void				*ft_malloc(size_t size);
void				ft_num_line(int *val);
void				ft_num_val(int *num_val);
void				ft_print_matrix(t_matrix elem);
int					ft_work(t_matrix *elem);
void				ft_print_line(int *line, int size_line);
void				ft_free(void **line);
void				ft_free_all(t_matrix *elem);

#endif