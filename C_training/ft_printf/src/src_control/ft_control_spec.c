/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:17:49 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 10:42:55 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_size_num(const char *format)
{
	int		ret;

	ret = 0;
	while (ft_isdigit(*format++))
		++ret;
	return (ret);
}

static int		ft_find_width_accuracy(const char *format)
{
	int			dot;

	dot = 0;
	if (*format == '.')
	{
		g_spec.flags |= DOT;
		if (ft_isdigit(*(format + 1)))
			g_spec.accuracy = ft_atoi(format + 1);
		dot = 1;
	}
	else
		g_spec.width = ft_atoi(format);
	return (ft_size_num(format + dot) + dot);
}

static int		ft_work_spec(const char *format)
{
	int			zero_shift;

	g_spec.flags = 0;
	while (!(ft_isalpha(*format)))
	{
		zero_shift = 1;
		if (*format == '#')
			g_spec.flags |= HASH;
		else if (*format == '+')
			g_spec.flags |= PLUS;
		else if (*format == '-')
			g_spec.flags |= DASH;
		else if (*format == ' ')
			g_spec.flags |= SPACE;
		else if (*format == '0')
			g_spec.flags |= ZERO;
		else if (*format == '*')
			g_spec.paste = 1;
		else if (ft_isdigit(*format) || ((*format == '.')))
		{
			format += ft_find_width_accuracy(format);
			zero_shift = 0;
		}
		format += zero_shift;
	}
	return (1);
}


int			ft_control_spec(const char *format)
{
	g_spec.accuracy = 0;
	g_spec.width = 0;
	ft_work_spec(format);
	return (1);
}