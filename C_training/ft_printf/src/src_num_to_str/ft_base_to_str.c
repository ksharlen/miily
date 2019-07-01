/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:11:44 by cormund           #+#    #+#             */
/*   Updated: 2019/07/01 11:30:11 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char					*ft_size_work(char *str)
{
	if (g_spec.flags & DASH)
	{
		ft_memset(str + g_spec.size_num, ' ', g_spec.width - g_spec.size_num);
	}
	else
	{
		ft_memset(str, ' ', g_spec.width - g_spec.size_num);
		str += g_spec.width - g_spec.size_num;
	}
	g_spec.size_write += g_spec.width - g_spec.size_num;
	g_spec.size_buf -= g_spec.width - g_spec.size_num;
	return (str);
}
// ? подумать над управляющей функ-й для d, x, o
char					*ft_base_to_str(unsigned long long num, int base)
{
	char				*str;
	char				*str_num;
	size_t				len;
	unsigned long long	cp_num;
	size_t				size_str;

	cp_num = num;
	len = ft_base_depth(num, base);
	size_str = g_spec.width > len ? g_spec.width : len;
	str = (char *)ft_memalloc((size_str) * sizeof(char));
	if (!(str_num = str))
		return (NULL);
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

// void					ft_base_to_str_with_buf(unsigned long long num, int base, char *buf)
// {
// 	char				*str_num;
// 	size_t				len;
// 	unsigned long long	cp_num;
// 	size_t				size_str;

// 	if (g_spec.spec == 'p')
// 	{
// 			g_spec.spec = 'x';
// 			g_spec.flags |= HASH;
// 	}
// 	len = ft_base_depth(num, base);
// 	size_str = g_spec.width > len ? g_spec.width : len;
// 	// str = ft_ret_buf(size_str);
// 	if (g_spec.width > len)
// 		str_num = ft_size_work(buf);
// 	while (len--)
// 	{
// 		str_num[len] = (num % base > 9 ? num % base + g_spec.spec - 33 : num % base + '0');
// 		num /= base;
// 	}
// 	if (g_spec.flags & HASH && cp_num && (g_spec.spec == 'x' || g_spec.spec == 'X'))
// 		str_num[1] = g_spec.spec;
// 	g_spec.size_num = size_str;
// }