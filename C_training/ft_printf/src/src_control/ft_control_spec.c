/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_spec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:17:49 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 12:10:18 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_check_star(va_list form)
{
	if (g_spec.flags & STAR_ACC)
	{
		g_spec.accuracy = va_arg(form, int);
		if (g_spec.accuracy < 0)
			g_spec.accuracy = 0;
	}
	else if (g_spec.flags & STAR_WITH)
	{
		g_spec.width = va_arg(form, int);
		if (g_spec.width < 0)
		{
			g_spec.flags |= DASH;
			NUM_MOD(g_spec.width);
		}
	}
}

static int		ft_check_mod(const char *format)
{
	//printf("one\n");
	int ret;
	//?Тут сделать првоерку на спецификатор числа
	ret = 0;
	if (*format == 'l')
	{
		//printf("i am here\n");
		ret = ft_l_format(format);
	}
	else if (*format == 'h')
		ret = ft_h_format(format);
	else if (*format == 'j' || *format == 'z' || *format == 't')
		ret = ft_j_z_t_format(format);
	else if (*format == 'L')
		ret = ft_big_l(format);
	else
		ret = 1;
	return (ret);
}

static int		ft_find_width_accuracy(const char *format, va_list form)
{
	int shift;

	if (*format == '*')
	{
		g_spec.flags |= STAR_WITH;
		ft_check_star(form);
		shift = 1;
	}
	else if (*format != '.')
	{
		g_spec.width = ft_atoi(format);
		shift = ft_str_size_num(format);
	}
	else if (*format == '.' && *(format + 1) == '*')
	{
		g_spec.flags |= STAR_ACC;
		g_spec.flags |= DOT;
		ft_check_star(form);
		shift = 2;
	}
	else
	{
		g_spec.accuracy = ft_atoi(format + 1);
		shift = ft_str_size_num(format + 1) + 1;
		g_spec.flags |= DOT;
	}
	return (shift);
}

static void		ft_work_spec(const char *format, va_list form)
{
	int			zero_shift;

	while (!(ft_ismy(*format) && *format)) //?Поменять условие для размеров
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
		else if ((ft_isdigit(*format) || *format == '*') || ((*format == '.')))
			zero_shift = ft_find_width_accuracy(format, form);
		else
			zero_shift = ft_check_mod(format);
		format += zero_shift;
	}
}

int			ft_control_spec(const char *format, va_list form)
{
	g_spec.accuracy = 0;
	g_spec.width = 0;
	g_spec.flags = 0;
	g_spec.mod = 0;
	ft_work_spec(format, form);
	//printf("g_spec.spec = %c\n", g_spec.spec);
	//ft_print_test(format);
	//exit(0);
	return (1);
}