/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/13 08:12:19 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../printf.h"
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
	//int a = 31;

	//printf("a & 4 = %d\n", a & 4);
	// printf("%010d\n", 5);
	// printf("%010D\n", 5);
	// printf("%010u\n", 5);
	// printf("%010U\n", 5);
	// printf("%010x\n", 5);
	// printf("%010X\n", 5);
	// printf("%010o\n", 5);
	// printf("%010O\n", 5);
	// printf("%010i\n", 5);
	// printf("%010f\n", 5.0);
	// printf("%010F\n", 5.0);
	// printf("%010g\n", 5.0);
	// printf("%010G\n", 5.0);
	// printf("%010a\n", 5.0);
	// printf("%010A\n", 5.0);
	short a = 13;
	printf("%+a", 13.0);
	return (0);
}
