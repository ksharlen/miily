/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:17:49 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/05 16:34:45 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static int		ft_size_num(const char *format)
{
	int		ret;

	ret = 0;
	while (ft_isdigit(*format))
	{
		++ret;
		++format;
	}
	return (ret);
}

static int		ft_find_flags(const char *format)
{
	g_spec.flags = 0;
	while (!(ft_isalpha(*format)))
	{
		if (*format == '#')
			g_spec.flags |= HASH;
		else if (*format == '+')
			g_spec.flags |= PLUS;
		else if (*format == '-')
			g_spec.flags |= DEC;
		else if (*format == ' ')
			g_spec.flags |= SPACE;
		else if (*format == '0')
			g_spec.flags |= ZERO;
		else if (ft_isdigit(*format) || (*format == '.'))
		{
			return (ft_find_width_accuracy(*format));
		}
		else
			++format;
	}
}

static int		ft_find_width_accuracy(const char *format)
{
	int			dot;

	dot = 0;
	if (*format == '.')
	{
		g_spec.width = ft_atoi(format + 1);
		dot = 1;
	}
	else
		g_spec.accuracy = ft_atoi(format);
	return (ft_size_num(format) + dot);
}

void			ft_control_spec(const char *format)
{
	ft_find_flags(format);
	
}