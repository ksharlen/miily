/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_include.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:11:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/23 08:19:30 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_mem_sort_include(void *cont, size_t size)
{
	unsigned char *content;
	unsigned char value;
	size_t index;
	size_t i;
	
	content = (unsigned char *)cont;
	i = 1;
	while (i < size)
	{
		value = content[i];
		index = i;
		while ((index > 0) && (content[index - 1] > value))
		{
			content[index] = content[index - 1];
			index--;
		}
		content[index] = value;
		++i;
	}
}
