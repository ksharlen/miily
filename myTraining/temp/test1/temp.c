/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 21:03:36 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/10 21:20:19 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_sum(int *a, int *b);
void	ft_prom(int **a, int **b);

int		main(void)
{
	int a;
	int b;

	a = 5;
	b = 7;
	ft_sum(&a, &b);
	return (0);
}

void	ft_sum(int *a, int *b)
{
	printf("before a = %d b = %d\n", *a, *b);
	*a = *a + *b;
	printf("after a (*a) = %d b = %d\n", *a, *b);
	ft_prom(&a, &b);
}

void	ft_prom(int **a, int **b)
{
	printf("before a = %d b = %d\n", **a, **b);
	**a = (**a) * (**b);
	printf("after = a = (**a) = %d b = %d\n", **a, **b);
}
