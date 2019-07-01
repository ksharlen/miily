/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:18:38 by marvin            #+#    #+#             */
/*   Updated: 2019/07/01 11:38:33 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static char check_flags(void)
// {
// 	char flag;

// 	if (g_spec.flags & DEC)
// 		flag = '-';
// 	else if (g_spec.flags & PLUS)
// 		flag = '+';
// 	else if (g_spec.flags & SPACE)
// 		flag = ' ';
// 	return (flag);
// }

// static void work_to_width(void)
// {
// 	char flag;
// 	char *buf;

// 	if (g_spec.width > g_spec.size_num)
// 	{
// 		if (g_spec.flags & ZERO)
// 		{
// 			flag = check_flags();
// 			buf = ft_work_buf(&flag, 1);
// 			ft_memset(buf, '0', g_spec.width - g_spec.size_num);
// 		}
// 		else
// 		{
			
// 		}
// 	}
// }

// static void work_to_acc(void)
// {
// 	char flag;
// 	char *buf;

// 	flag = check_flags();
// 	buf = ft_work_buf(&flag, 1);
// 	//!DASH нету, точность есть
// 	if (g_spec.accuracy > g_spec.size_num)
// 	{
// 		ft_memset(buf, '0', g_spec.accuracy - g_spec.size_num);
// 		g_spec.size_write += (g_spec.accuracy - g_spec.size_num);
// 		g_spec.size_buf -= (g_spec.accuracy - g_spec.size_num);
// 	}
// 	else
// 		g_spec.accuracy = 0;
// }

// static void test_need_delete(void)
// {
// 	if (g_spec.flags & DOT)
// 	{
// 		if (g_spec.flags & DASH)
// 		{
			
// 		}
// 		else
// 			work_to_acc();
// 	}
// 	else
// 	{
// 		work_to_width();
// 	}
// }

// void		ft_int_to_str(va_list format)
// {
	
// }

static char			ft_chr_space_plus_dec()
{
	if (g_spec.flags & DEC)
		return ('-');
	if (g_spec.flags & PLUS)
		return ('+');
	return (' ');
}

static size_t		ft_size_num(long long int num)
{
	size_t			l;
	long long int	num_cp;

	num_cp = num;
	l = g_spec.flags & DOT && g_spec.accuracy == 0 && num == 0 ? 0 : 1;
	while (num_cp /= 10)
		++l;
	g_spec.flags & DOT && g_spec.accuracy > l ? l = g_spec.accuracy : 0;
	g_spec.flags & SPACE || g_spec.flags & PLUS || num < 0 ? ++l : 0;
	num < 0 ? g_spec.flags ^= DEC : 0;
	g_spec.flags & ZERO && g_spec.width > l && !(g_spec.flags & DOT) ?\
	l = g_spec.width : 0;
	return (l);
}

static				ft_

void				ft_int_to_str(long long int num)
{
	char 		*str;
	char		*str_cp;
	size_t		size_num;
	short		sign;
	size_t		size_str;
	char		*buf;
	char 		temp;

	sign = (num < 0 ? -1 : 1);
	size_num = ft_size_num(num);
	g_spec.size_num = size_num;
	size_str = (size_num < g_spec.width ? g_spec.width : size_num);
	// if (g_spec.width > size_num)
	// 	str_cp = ft_size_work(str);
	if (g_spec.size_buf < size_num && SIZE_BUF > size_num)
	{
		ft_write_buf_and_clean(WRITE_BUF);
		buf = ft_work_buf(GET_POINT, 0);
	}
	else if (SIZE_BUF < size_num)
	{
		buf = ft_strnew(size_str);
		if (!(str_cp = buf))
			exit(0);
	}
	else
		buf = ft_work_buf(GET_POINT, 0);
	if (g_spec.width > size_num)
		str_cp = ft_size_work(buf);
	else
		str_cp = buf;
	while (size_num--)
	{
		str_cp[size_num] = num % 10 * sign + '0';
		num /= 10;
		g_spec.size_write++;
		g_spec.size_buf--;
	}
	if (g_spec.flags & SPACE || g_spec.flags & PLUS || g_spec.flags & DEC)
		str_cp[0] = ft_chr_space_plus_dec();
	//ft_write_buf_and_clean(NULL);
	//printf("buf = %s\n", buf);
	g_spec.size_num = size_str;
}
