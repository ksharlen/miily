/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project2.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:25:30 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/26 09:05:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECT2_H
# define PROJECT2_H

# include "libft.h"

# define SIZE_WORD 5

typedef struct		s_line
{
	char			*line;
	struct s_line	*next;
}					t_line;

# define			ERR_MEM "memory does not allocated!!!\n"

t_line				*ft_line_create(char *line);
void				ft_error(char *err);
void				ft_lstadd_line(t_line **beg, t_line *lstadd);
void				ft_print_line(t_line *beg);
void				ft_realloc(t_line *realloc, char *cat_line);
void				ft_free_all(t_line **beg);
void				ft_free_elem(t_line **elem);

#endif