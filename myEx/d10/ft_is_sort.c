/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 11:14:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 12:19:05 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		test(int a, int b);

int		ft_os_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
	{
		//тут по возрастанию
		while (i < length)
		{
			if (i == (length - 1))
				return 1;
			printf("1\n");
			if (f(tab[i], tab[i + 1]) > 0)
				return 0;
			i++;
		}
	}
	if (f(tab[i], tab[i + 1]) > 0)
	{
		//тут по убыванию
		while (i < length)
		{
			if (i == (length - 1))
				return 1;
			if (f(tab[i], tab[i + 1]) < 0)
				return 0;
			i++;
		}
	}
	return (0);
}

int		test(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int array_upp[1] = { 1 };
	int array_low[10] = { 50, 49, 45, 31, 30, 24, 13, 12, 10, 2 };
	int flag = 10;

	flag = ft_os_sort(array_low, 10, test);
	printf("flag = %d\n", flag);
	return (0);
}
