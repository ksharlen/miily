/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/06/13 16:57:21 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_size_num(long long int num)
{
	size_t		l;

	l = num > 0 ? 0 : 1;
	while (num)
	{
		l++;
		num /= 10;
	}
	return (l);
}

//?	h(short или unsigned short) l(long) ll(long long) hh(char или unsigned char).
char			*ft_int_to_str(long long int num)
{
	char 		*all_str;
	size_t		size_num;
	short		sign;

	sign = 1;
	size_num = ft_size_num(num);
	g_spec.size_write += size_num;
	g_spec.size_num = size_num;
	if (!(all_str = (char *)ft_memalloc(size_num + 1)))
		return (NULL);
	all_str[size_num] = '\0';
	if (num < 0)
	{
		*all_str = '-';
		sign = -1;
	}
	!num ? *all_str = '0' : 0;
	while (num)
	{
		all_str[--size_num] = num % 10 * sign + '0';
		num /= 10;
	}
	//printf("all_str = %s\n", all_str);
	return (all_str);
}

// int main(int argc, char const *argv[])
// {
// 	char *str;

// 	// str = ft_int_to_str(123123123123123);
// 	// //printf("num = %ld", 123);
// 	// printf("str = %s\n", str);
// 	// printf("str = %ld", 123123123123123);
// 	printf("long long = %ld\n", sizeof(long long));
// 	printf("long = %ld\n", sizeof(long));
// 	printf("%lld", 22222222222222222222211111);
// 	//printf("long = %lu", sizeof(long));
// 	//printf("int = %lu", sizeof(int));
// 	return (0);
// }
