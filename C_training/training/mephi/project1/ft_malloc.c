/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:12:39 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/20 23:09:05 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void		ft_free(void **line)
{
	if (*line && line)
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
		ft_free((void *)elem->elem[index++].num);
	ft_free((void *)elem->elem);
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