/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 07:55:34 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/23 08:23:21 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static void		ft_print_num(int *num, size_t size)
{
	size_t i;
	i = 0;

	while (i < size)
	{
		printf("test_num[%lu] = %d\n", i, num[i]);
		i++;
	}
}

int		main(void)
{
	int	test_num[] = { 4, 2, 6, 123, 542 , 43, 432 , 24, 14, 4 };
//	char str[] = "hello world how are you?";

	ft_mem_sort_include(test_num, 10);
//	puts(str);
	ft_print_num(test_num, 10);
	return (0);
}
