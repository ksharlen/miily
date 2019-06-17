/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_fwa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 08:37:47 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/17 16:49:22 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_plus_space(const char *str)
{
	if (ft_atoi(str) >= 0)
	{
		if ((g_spec.flags & PLUS) == PLUS)
			return ('+');
		else if ((g_spec.flags & SPACE) == SPACE)
			return (' ');
		else
			return (0);
	}
	else
		return('-');
}

static char		*ft_create_str(size_t size, int sym, int dash, const char *str)
{
	// char 		*ret;
	// char 		*shift_ret;

	// if (!(ret = (char *)ft_memalloc(size)))
	// 	exit(0);
	// shift_ret = ret;
	// if (dash && sym != '0')
	// {
	// 	shift_ret[0] = sym;
	// 	++shift_ret;
	// 	ft_memset(shift_ret, '0', g_spec.accuracy - g_spec.size_num);
	// 	shift_ret += g_spec.accuracy - g_spec.size_num;
	// 	ft_memcpy(shift_ret, str, g_spec.size_num);
	// 	shift_ret += g_spec.size_num;
	// 	ft_memset(shift_ret, ' ', g_spec.width - g_spec.accuracy - 1);
	// 	return (ret);
	// }
	// ft_memset(ret, sym_width, g_spec.width - g_spec.accuracy);
	// shift_ret += g_spec.width - g_spec.accuracy;
	// ft_memset(shift_ret, '0', g_spec.accuracy - g_spec.size_num);
	// shift_ret += g_spec.accuracy - g_spec.size_num;
	// ft_memcpy(shift_ret, str, g_spec.size_num);
	// return (ret);
	char		*ret;
	char		*shift_ret;
	int			sym_width;
	size_t		s_sym;
	int			shift_sym;

	s_sym = 0;
	shift_sym = 0;
	sym_width = ' ';
	if (!(ret = (char *)ft_memalloc(size)))
		exit(0);
	shift_ret = ret;
	if ((g_spec.flags & DASH) == DASH)
	{
		//ft_swap(&g_spec.width, &g_spec.accuracy);
		//sym_width = '0';
		//++shift_ret;
		//s_sym = 0;
		ft_memset(shift_ret++, sym, 1);
		ft_memset(shift_ret, '0', g_spec.accuracy - g_spec.size_num);
		ft_memcpy(shift_ret + (g_spec.accuracy - g_spec.size_num), str, g_spec.size_num);
		ft_memset(shift_ret + g_spec.accuracy, ' ', g_spec.width - g_spec.accuracy);
	}
	ft_memset(shift_ret, ' ', g_spec.width);
	ft_memset()
}
static char		*ft_check_wa(const char *str)
{
	char		*ret;
	size_t		size;
	int			sym;

	sym = ft_plus_space(str);
	ret = NULL;
	if (g_spec.width > g_spec.accuracy && g_spec.accuracy > g_spec.size_num)
	{
		size = g_spec.width;
		if ((g_spec.flags & DEC) == DEC)
			ret = ft_create_str(size, sym, '-', str, ' ');
		else
			ret = ft_create_str(size, sym, 0, str, ' ');
		g_spec.size_write += size;
	}
	return (ret);
}
// {
// 	size_t		size;
// 	char		*ret;

// 	size = 0;
// 	ret = NULL;
// 	if (g_spec.width > g_spec.accuracy && g_spec.accuracy > g_spec.size_num)
// 	{
// 		size = g_spec.width;
// 		if ((g_spec.flags & DEC) == DEC)
// 		{
// 			if ((g_spec.flags & PLUS) == PLUS)
// 			{
// 				ret = ft_memalloc(size);
// 				ft_memset(ret, '+', 1);
// 				ft_memset(ret + 1, '0', g_spec.accuracy - g_spec.size_num);
// 				ft_memcpy(ret + g_spec.accuracy - g_spec.size_num + 1, str, g_spec.size_num);
// 				ft_memset(ret + g_spec.accuracy + 1, ' ', g_spec.width - g_spec.accuracy - 1);
// 			}
// 		}
// 		g_spec.size_write += size;
// 	}
	// if (g_spec.width > g_spec.accuracy && g_spec.accuracy > g_spec.size_num)
	// {
	// 	g_spec.width -= g_spec.accuracy;
	// 	g_spec.accuracy -= g_spec.size_num;
	// }
	// else if ((g_spec.accuracy > g_spec.width &&
	// g_spec.width > g_spec.size_num) ||
	// (g_spec.accuracy > g_spec.size_num && g_spec.size_num > g_spec.width))
	// {
	// 	g_spec.accuracy -= g_spec.size_num;
	// 	g_spec.width = 0;
	// }
	// else if (g_spec.width > g_spec.size_num && g_spec.size_num > g_spec.accuracy)
	// {
	// 	g_spec.width -= g_spec.size_num;
	// 	g_spec.accuracy = 0;
	// }
	// // else if (g_spec.accuracy > g_spec.size_num && g_spec.size_num > g_spec.width)
	// // {
	// // 	g_spec.accuracy -= g_spec.size_num;
	// // 	g_spec.width = 0;
	// // }
	// else
	// {
	// 	g_spec.width = 0;
	// 	g_spec.accuracy = 0;
	// }
// 	return (ret);
// }

char            *ft_width(const char *str)
{
	// char		*ret;
	// size_t		size;
	// char		fill;

	// fill = ' ';
	// if (g_spec.accuracy < g_spec.size_num && g_spec.width < g_spec.size_num)
	// {
	// 	g_spec.width = 0;
	// 	g_spec.accuracy = 0;
	// }
	// else
	// 	ft_check_wa();
	// size = g_spec.width + g_spec.accuracy + g_spec.size_num;
	// ret = ft_strnew(size);
	// ft_memset(ret, fill, g_spec.width);
	// ft_memset(ret + g_spec.width, '0', g_spec.accuracy);
	// ft_memcpy(ret + g_spec.width + g_spec.accuracy, str, g_spec.size_num);
	// g_spec.size_write += size;//!Ошибка тут!!!
	//printf("width = %d\naccuracy = %d\n", g_spec.width, g_spec.accuracy);
	//printf("size = %ld\n", size);
	return (ft_check_wa(str));
}

// char            *ft_flags_hash(const char *str)
// {
//     char *ret;

//     return (ret);
// }

// // char            *ft_flag_plus_space(const char *str)
// // {
// //     char *ret;

// //     if (g_spec.flags & PLUS == PLUS)
// //     {
// //     }
// //     else if (g_spec.flags & SPACE == SPACE)
// // }

// char            *ft_flag_dash_zero(const char *str)
// {
//     char *ret;

//     return (ret);
// }


// char            *ft_accuracy(const char *str)
// {
//     char *ret;

//     return (ret);
// }
