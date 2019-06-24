/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/06/24 09:24:12 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char				*ft_size_work(char *str)
{
	if (g_spec.flags & DASH)
		ft_memset(str + g_spec.size_num, ' ', g_spec.width - g_spec.size_num);
	else
	{
		ft_memset(str, ' ', g_spec.width - g_spec.size_num);
		str += g_spec.width - g_spec.size_num;
	}
	return (str);
}

char					*ft_base_to_str(unsigned long long num, int base)
{
	char				*str;
	char				*str_num;
	size_t				len;
	unsigned long long	cp_num;
	size_t				size_str;

	cp_num = num;
	len = ft_base_depth(num, base);
	//printf("len = %ld\n", len);
	//printf("g_spec.width = %d\n", g_spec.width);
	size_str = g_spec.width > len ? g_spec.width : len;
	//printf("size_num = %ld\n", g_spec.size_num);
	str = (char *)malloc((size_str + 1) * sizeof(char));
	if (!(str_num = str))
		return (NULL);
	str[size_str] = '\0';
	if (g_spec.width > len)
		str_num = ft_size_work(str);
	while (len--)
	{
		str_num[len] = (num % base > 9 ? num % base + g_spec.spec - 33 : num % base + '0');
		num /= base;
	}
	if (g_spec.flags & HASH && cp_num && (g_spec.spec == 'x' || g_spec.spec == 'X'))
		str_num[1] = g_spec.spec;
	g_spec.size_num = size_str;
	return (str);
}
