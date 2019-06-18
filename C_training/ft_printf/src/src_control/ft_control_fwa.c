/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_fwa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 08:36:16 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/18 16:32:35 by ksharlen         ###   ########.fr       */
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

static char		*ft_zw(int size_w, int size_a, const char *str, size_t size)
{
	char 		*ret;
	char		*shift_ret;
	int			flag;

	flag = ft_plus_space(str);
	if (!(ret = (char *)ft_memalloc(sizeof(char) * size)))
		exit(0);
	shift_ret = ret;
	if (ft_plust_space(str) && str)
	{
		*shift_ret++ = flag;
	}
	ft_memset(shift_ret, '0', size_w);
	ft_memcpy(shift_ret + size_w, str, g_spec.size_num);
	ft_memset(shift_ret + size_a, ' ', size_a);
	g_spec.size_write += size;
	return (ret);
}

static char		*ft_wz(int size_w, int size_a, const char *str, size_t size)
{
	return (NULL);
}

char            *ft_control_fwa(const char *str)
{
	size_t 		size;

	// printf("width = %d\naccuracy = %d\n", g_spec.width, g_spec.accuracy);
	// printf("flags = %d\n", g_spec.flags);
	// printf("size_num = %ld\n", g_spec.size_num);
	if (((g_spec.flags & DASH) == DASH) && ((g_spec.width > g_spec.size_num) && (g_spec.accuracy > g_spec.size_num)))
	{
		printf("1\n");
		if (g_spec.width > g_spec.accuracy)
			size = g_spec.width;
		else
			size = g_spec.accuracy;
		//printf("1\n");
		return (g_spec.accuracy - g_spec.size_num, g_spec.width - g_spec.accuracy, str, size));
	}
	return (NULL);
}