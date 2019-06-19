/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 10:16:40 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/19 10:26:36 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void		ft_print_matrix(t_matrix elem)
{
	int		index;
	int		jindex;

	index = 0;
	printf("\n");
	while (index < elem.num_list)
	{
		jindex = 0;
		while (jindex < elem.elem[index].size_line)
			printf("%d	", elem.elem[index].num[jindex++]);
		printf("\n");
		++index;
	}
}