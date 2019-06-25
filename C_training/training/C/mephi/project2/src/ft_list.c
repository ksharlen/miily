/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:00:26 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/25 11:40:35 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project2.h"

void		ft_error(char *err)
{
	perror(err);
	exit(0);
}

t_line		*ft_line_create(char *line)
{
	t_line	*ret;

	ret = NULL;
	if (line)
	{
		ret = (t_line *)ft_memalloc(sizeof(t_line));
		if (!ret)
			ft_error(ERR_MEM);
		ret->line = ft_strnew(sizeof(char) * ft_strlen(line));
		if (!ret->line)
			ft_error(ERR_MEM);
		ft_strcpy(ret->line, line);
		return (ret);
	}
	else
		return (NULL);
}

void		ft_lstadd_line(t_line **beg, t_line *lstadd)
{
	t_line 	*ret;

	if (*beg && beg)
	{
		ret = (*beg);
		while (ret->next)
			ret = ret->next;
		ret->next = lstadd;
	}
	else if (!*beg && beg)
	{
		*beg = lstadd;
		lstadd->next = NULL;
	}
}

void		ft_print_line(t_line *beg)
{
	while (beg)
	{
		printf("line = %s\n", beg->line);
		beg = beg->next;
	}
}