/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_fwa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 08:37:47 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/14 16:11:41 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_check_wa(void)
{
	if (g_spec.width > g_spec.accuracy && g_spec.accuracy > g_spec.size_num)
	{
		g_spec.width -= g_spec.accuracy;
		g_spec.accuracy -= g_spec.size_num;
	}
	else if ((g_spec.accuracy > g_spec.width &&
	g_spec.width > g_spec.size_num) ||
	(g_spec.accuracy > g_spec.size_num && g_spec.size_num > g_spec.width))
	{
		g_spec.accuracy -= g_spec.size_num;
		g_spec.width = 0;
	}
	else if (g_spec.width > g_spec.size_num && g_spec.size_num > g_spec.accuracy)
	{
		g_spec.width -= g_spec.size_num;
		g_spec.accuracy = 0;
	}
	// else if (g_spec.accuracy > g_spec.size_num && g_spec.size_num > g_spec.width)
	// {
	// 	g_spec.accuracy -= g_spec.size_num;
	// 	g_spec.width = 0;
	// }
	else
	{
		g_spec.width = 0;
		g_spec.accuracy = 0;
	}
}

char            *ft_width(const char *str)
{
	char		*ret;
	size_t		size;

	if (g_spec.accuracy < g_spec.size_num && g_spec.width < g_spec.size_num)
	{
		g_spec.width = 0;
		g_spec.accuracy = 0;
	}
	else
		ft_check_wa();
	size = g_spec.width + g_spec.accuracy + g_spec.size_num;
	ret = ft_strnew(size);
	ft_memset(ret, ' ', g_spec.width);
	ft_memset(ret + g_spec.width, '0', g_spec.accuracy);
	ft_memcpy(ret + g_spec.width + g_spec.accuracy, str, g_spec.size_num);
	g_spec.size_write += size;//!Ошибка тут!!!
	//printf("width = %d\naccuracy = %d\n", g_spec.width, g_spec.accuracy);
	//printf("size = %ld\n", size);
	return (ret);
}

char            *ft_flags_hash(const char *str)
{
    char *ret;

    return (ret);
}

// char            *ft_flag_plus_space(const char *str)
// {
//     char *ret;

//     if (g_spec.flags & PLUS == PLUS)
//     {
//     }
//     else if (g_spec.flags & SPACE == SPACE)
// }

char            *ft_flag_dash_zero(const char *str)
{
    char *ret;

    return (ret);
}


char            *ft_accuracy(const char *str)
{
    char *ret;

    return (ret);
}
