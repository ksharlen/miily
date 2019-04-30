/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_include.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:08:03 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/23 08:10:23 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sort_include(int *num, size_t size)
{
	size_t	i;
	int		value;
	size_t	index;

	i = 1;
	while (i < size)
	{
		value = num[i];
		index = i;
		while ((index > 0) && (num[index - 1] > value))
		{
			num[index] = num[index - 1];
			index--;
		}
		num[index] = value;
		++i;
	}
}
