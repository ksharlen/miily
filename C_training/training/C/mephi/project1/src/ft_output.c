/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 10:16:40 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/20 22:11:54 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void		ft_print_line(int *line, int size_line)
{
	size_t	index;

	index = 0;
	while (index < size_line)
		printf("%d	", line[index++]);
	printf("\n");
}

void		ft_print_matrix(t_matrix elem)
{
	int		index;

	index = 0;
	printf("\n");
	while (index < elem.num_list)
		ft_print_line(elem.elem[index++].num, elem.elem[index].size_line);
}