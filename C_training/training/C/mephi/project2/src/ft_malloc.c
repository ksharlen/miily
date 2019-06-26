/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:41:01 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/26 09:03:40 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project2.h"

void		ft_realloc(t_line *realloc, char *cat_line)
{
	char *temp;

	if (realloc && realloc->line)
	{
		temp = realloc->line;
		realloc->line = ft_strjoin(realloc->line, cat_line);
		if (!realloc->line)
			ft_error(ERR_MEM);
		ft_strdel(&temp);
	}
}

void		ft_free_elem(t_line **elem)
{
	if (*elem && elem)
	{
		if ((*elem)->line)
		{
			ft_strdel(&(*elem)->line);
		}
		ft_memdel((void *)(elem));
	}
}

void		ft_free_all(t_line **beg)
{
	t_line *ret;
	t_line *temp;

	if (*beg && beg)
	{
		ret = (*beg);
		temp = ret;
		while (ret)
		{
			if (ret->line)
			{
				ft_strdel(&ret->line);
			}
			ret = ret->next;
		}
		free(*beg);
		*beg = NULL;
	}
}