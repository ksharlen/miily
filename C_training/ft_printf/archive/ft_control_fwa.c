/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_fwa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 08:36:16 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 20:51:35 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_plus_space(void)
{
	if (g_spec.flags & DEC)
		return ('-');
	else if (g_spec.flags & PLUS)
		return ('+');
	else if (g_spec.flags & SPACE)
		return (' ');
	else
		return (0);
	// if (ft_atoi(str) >= 0)
	// {
	// 	if ((g_spec.flags & PLUS) == PLUS)
	// 		return ('+');
	// 	else if ((g_spec.flags & SPACE) == SPACE)
	// 		return (' ');
	// 	else
	// 		return (0);
	// }
	// else
	// 	return('-');
}

static char		*ft_zw(int size_a, int size_w, const char *str, size_t size)
{
	char 		*ret;
	char		*shift_ret;
	int			flag;

	//printf("size_a = %d\n", size_a);
	//printf("size_w = %d\n", size_w);
	//printf("test123\n");
	flag = ft_plus_space();
	if (!(ret = (char *)ft_memalloc(sizeof(char) * size)))
		exit(0);
	shift_ret = ret;
	if (flag && str)
	{
		*shift_ret++ = flag;
		++g_spec.size_write;
	}
	ft_memset(shift_ret, '0', size_a);
	ft_memcpy(shift_ret + size_a, str, g_spec.size_num);
	ft_memset(shift_ret + size_a + g_spec.size_num, ' ', size_w);
	//g_spec.size_write += size;
	return (ret);
}

static char		*ft_wz(int size_w, int size_a, const char *str, size_t size)
{
	char		*ret;
	char		*shift_ret;
	int			flag;
	int			shift_flag;

	shift_flag = 0;
	flag = ft_plus_space();
	if (!(ret = (char *)ft_memalloc(sizeof(char) * size)))
		exit(0);
	shift_ret = ret;
	if (flag && str)
	{
		//printf("tut2\n");
		--size_w;
		*(shift_ret + size_w) = flag;
		shift_flag = 1;
	}
	//printf("1\n");
	ft_memset(shift_ret, ' ', size_w);
	ft_memset(shift_ret + size_w + shift_flag, '0', size_a);
	ft_memcpy(shift_ret + size_w + size_a + shift_flag, str, g_spec.size_num);
	//g_spec.size_write += size;
	//printf("size = %ld\n", size);
	return (ret);
}

char            *ft_control_fwa(const char *str)
{
	size_t 		size;
	char		*ret;

	// if ((g_spec.width > g_spec.size_num) && (g_spec.accuracy > g_spec.size_num))
	// {
	// 	if (g_spec.width > g_spec.accuracy)
	// 		size = g_spec.width;
	// 	else
	// 		size = g_spec.accuracy;
	// 	if (g_spec.flags & DASH)
	// 		return (ft_zw(g_spec.accuracy - g_spec.size_num, g_spec.width - g_spec.accuracy, str, size));
	// 	else
	// 		return (ft_wz(g_spec.width - g_spec.accuracy, g_spec.accuracy - g_spec.size_num, str, size));
	// }
	if (g_spec.accuracy > g_spec.size_num && g_spec.width > g_spec.size_num)
	{
		//?В другую ф-ию
		if (g_spec.accuracy >= g_spec.width)
		{
			size = g_spec.accuracy;
			ret = ft_zw(g_spec.accuracy - g_spec.size_num, 0, str, size);
		}
		else if (g_spec.width > g_spec.accuracy)
		{
			if (g_spec.flags & DASH)
			{
				//printf("test1111\n");
				size = g_spec.width;
				ret = ft_zw(g_spec.accuracy - g_spec.size_num, g_spec.width - g_spec.accuracy, str, size);
			}
			else
			{
				size = g_spec.width;
				//printf("1\n");
				ret = ft_wz(g_spec.width - g_spec.accuracy, g_spec.accuracy - g_spec.size_num, str, size);
			}
		}
		//?
	}
	else if (g_spec.width > g_spec.size_num && g_spec.accuracy <= g_spec.size_num)
	{
		size = g_spec.width;
		if (g_spec.flags & DASH)
		{
			if (ft_plus_space())
				ret = ft_zw(0, g_spec.width - g_spec.size_num - 1, str, size);
			else
				ret = ft_zw(0, g_spec.width - g_spec.size_num, str, size);
		}
		else if (!g_spec.accuracy && !(g_spec.flags & DOT) && g_spec.flags & ZERO) //?Под вопросом
			ret = ft_zw(g_spec.width - g_spec.size_num, 0, str, size);
		else
			ret = ft_wz(g_spec.width - g_spec.size_num, 0, str, size);
	}
	else if (g_spec.accuracy > g_spec.size_num && g_spec.width <= g_spec.size_num)
	{
		size = g_spec.accuracy;
		ret = ft_wz(0, g_spec.accuracy - g_spec.size_num, str, size);
	}
	else if (g_spec.width <= g_spec.size_num && g_spec.accuracy <= g_spec.size_num)
	{
		size = g_spec.size_num;
		if (ft_plus_space())
		{
			//printf("tut\n");
			ft_wz(1, 0, str, size + 1);
		}
		else
			ft_wz(0, 0, str, size);
	}
	g_spec.size_write += size;
	return (ret);
}