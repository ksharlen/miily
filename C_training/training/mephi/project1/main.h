/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 00:29:54 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/17 12:50:18 by ksharlen         ###   ########.fr       */
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

#endif