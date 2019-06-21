/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:12:39 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/21 13:00:49 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void		ft_free_num(int **num)
{
	if ((*num) && num)
	{
		free(*num);
		(*num) = NULL;
	}
}

void		ft_free_elem(t_line **line)
{
	if ((*line) && line)
	{
		free(*line);
		*line = NULL;
	}
}

void		ft_free_all(t_matrix *elem)
{
	size_t	index;

	index = 0;
	while (index < elem->num_list)
		ft_free_num(&elem->elem[index++].num);
	ft_free_elem(&elem->elem);
}

void		*ft_malloc(size_t size)
{
	void 	*ret;
	ret = NULL;

	if (size > 0)
	{
		ret = malloc(size);
		if (!ret)
			ft_error(ERR_MEM);
	}
	return (ret);
}