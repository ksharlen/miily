/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:32:30 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 12:42:36 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

static double	ft_delim_chislo(double a, double b)
{
	if (a == 0)
		return (a / b);
	if (b == 0)
		return (b / a);
	if (a > b)
		return (a / b);
	if (b > a)
		return (b / a);
	else
	{
		printf("hello world\n");
		return (0.0);
	}
}

static int		ft_sum(int size, ...)
{
	va_list	form;
	int		sum;

	sum = 0;
	va_start(form, size);
	while (size--)
		sum += va_arg(form, int);
	return (sum);
}

int				main(void)
{
	int		sum;
	double	ret_delim_chislo;

	sum = ft_sum(4, 1, 2, 3, 4);
	ret_delim_chislo = ft_delim_chislo(10.0, 5.0);
	printf("ft_sum = %d\ndel = %lf\n", sum, ret_delim_chislo);
	return (0);
}
