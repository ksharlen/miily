/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/05/30 09:50:45 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//?	h(short или unsigned short) l(long) ll(long long) hh(char или unsigned char).
char	*ft_int_to_str(void *num, const char type)
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
	all_str = (char *)ft_memalloc(size_num);
	while (size_num)
	{
		all_str[size_num-- - 1] = (num % 10 * (sign)) + '0';
		num /= 10;
		if (size_num == 1 && sign < 0)
			size_num = 0;
	}
	return (all_str);
}

int main(int argc, char const *argv[])
{
	char *str;

	// str = ft_int_to_str(123123123123123);
	// //printf("num = %ld", 123);
	// printf("str = %s\n", str);
	// printf("str = %ld", 123123123123123);
	printf("long long = %ld\n", sizeof(long long));
	printf("long = %ld\n", sizeof(long));
	printf("%lld", 22222222222222222222211111);
	//printf("long = %lu", sizeof(long));
	//printf("int = %lu", sizeof(int));
	return (0);
}
