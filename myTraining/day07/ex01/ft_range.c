/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 08:20:08 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/08 10:04:07 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);
void	printInt(int *array);

int len;

int		main(void)
{
	int a;
	int b;
	int *p;

	scanf("%d %d", &a, &b);
	p = NULL;
	p = ft_range(a, b);
	printInt(p);
	free(p);
	return (0);	
}

int		*ft_range(int min, int max)
{
	int *p_num;
	int i;

	i = 0;
	p_num = NULL;
	len = max - min;
	if (len <= 1)
		return (0);

	p_num = (int *)malloc(len * sizeof(int));
	while (i < len)
		p_num[i++] = min++;
	return (p_num);
}

void	printInt(int *array)
{
	int i;

	i = 0;
	while (i < len)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
}
