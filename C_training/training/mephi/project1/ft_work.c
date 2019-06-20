/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 19:16:43 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/20 22:59:57 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int		ft_check_num(int num)
{
	MOD_NUM(num);
	while (num)
	{
		if ((num % 10) >= ((num / 10) % 10))
		{
			num /= 10;
			continue;
		}
		else
			return (0);
	}
	return (1);
}

static int		ft_check_line(int *line, int size_line)
{
	size_t		index;

	index = 0;
	while (index < size_line)
	{
		if (!ft_check_num(line[index]))
			return (0);
		++index;
	}
	return (1);
}

int				ft_work(t_matrix *elem)
{
	size_t		index;

	index = 0;
	while (index < elem->num_list)
	{
		if (ft_check_line(elem->elem[index].num, elem->elem[index].size_line))
			ft_print_line(elem->elem[index].num, elem->elem[index].size_line);
		else
			ft_free((void *)elem->elem[index].num);
		++index;
	}
	return (0);
}