/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:17:49 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/07 17:19:31 by ksharlen         ###   ########.fr       */
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
	return (ret);
}

static int		ft_find_width_accuracy(const char *format)
{
	int			dot;

	//printf("*format = %c\n", *format);
	dot = 0;
	//printf("*format = %c\n", *format);
	//printf("*format = %c\n", *format);
	if (*format == '.')
	{
		g_spec.accuracy = ft_atoi(format + 1);
		//printf("format + 1 = %c\n", *(format + 1));
		//printf("accurace_atoi = %d\n", g_spec.accuracy);
		dot = 1;
	}
	else
	{
		g_spec.width = ft_atoi(format);
		//printf("width_atoi = %d\n", g_spec.width);
	}
	//printf("ft_size_num = %d\n", ft_size_num(format));
	return (ft_size_num(format + dot));
}

static int		ft_work_spec(const char *format)
{
	g_spec.flags = 0;
	int			shift;
	int			zero_shift;

	//printf("*format = %c\n", *format);
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
		else if (ft_isdigit(*format) || (*format == '.'))
		{
			//printf("format = %s\n", format);
			shift = ft_find_width_accuracy(format);
			//printf("shift = %d\n", shift);
			//printf("format = %s\n", format);
			format += shift;
			zero_shift = 0;
		}
		// else
		// 	++format;
		format += zero_shift;
	}
	return (1);
}


int			ft_control_spec(const char *format)
{
	ft_work_spec(format);
	return (1);
}