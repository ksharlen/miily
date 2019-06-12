/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/12 20:26:53 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <unistd.h>

char	*ft_int_to_str(long long int num)
{
	char 	*all_str;
	long	copy_num;
	size_t	size_num;
	short	sign;

	sign = num > 0 ? 1 : -1;
	size_num = 0;
	copy_num = num;
	while (copy_num)
	{
		copy_num /= 10;
		++size_num;
	}
	all_str = (char *)malloc(size_num);
	while (size_num)
	{
		all_str[size_num-- - 1] = (num % 10 * (sign)) + '0';
		num /= 10;
		if (size_num == 1 && sign < 0)
			size_num = 0;
	}
	return (all_str);
}

int		main(void)
{
	char *str;

	str = ft_int_to_str(123);
	printf("str = %s\n", str);
	return (0);
}
