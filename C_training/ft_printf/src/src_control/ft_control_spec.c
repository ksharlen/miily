/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:17:49 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/11 09:45:26 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_size_num(const char *format)
{
	int		ret;

	ret = 0;
	while (ft_isdigit(*format++))
	{
		++ret;
		//++format;
	}
	//printf("ret = %d\n", ret);
	return (ret);
}

static int		ft_find_width_accuracy(const char *format)
{
	int			dot;

	dot = 0;
	if (*format == '.')
	{
		g_spec.accuracy = ft_atoi(format + 1);
		//g_spec.accuracy = MOD_NUM(g_spec.accuracy);
		dot = 1;
	}
	else
	{
		g_spec.width = ft_atoi(format);
	}
	return (ft_size_num(format + dot) + dot);
}

static int		ft_work_spec(const char *format)
{
	g_spec.flags = 0;
	int			zero_shift;

	while (!(ft_isalpha(*format)))
	{
		zero_shift = 1;
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
		else if (*format == '*')
			g_spec.paste = 1;
		else if (ft_isdigit(*format) || ((*format == '.') && ft_isdigit(*(format + 1))))
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
	ft_work_spec(format);
	return (1);
}