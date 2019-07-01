/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/01 17:24:52 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_define_spec(const char *format_string)
{
	char 		format;

	format_string += g_spec.shift_spec;
	format = *format_string;
	if (ft_check_the_entry(TYPE, format))
	{
		g_spec.spec = format;
		++g_spec.shift_spec;
	}
	else
		g_spec.spec = 0;
}

static void		ft_count_sym_to_spec(const char *format)
{
	g_spec.shift_spec = 0;
	g_spec.spec = 0;
	while (!ft_ismy(*format) && *format)
	{
		++g_spec.shift_spec;
		++format;
	}
}

static void		ft_control_var(va_list format)
{
	if (ft_check_the_entry(NUM_INT, g_spec.spec))
		ft_select_num_sys(format);
	else if (ft_check_the_entry(NUM_STRING, g_spec.spec))
	{
		if (g_spec.spec == 'c' || g_spec.spec == 'C')
			ft_char_to_str(format);
		else if (g_spec.spec == 's' || g_spec.spec == 'S')
			ft_str_to_str(format);
	}
	else if (ft_check_the_entry(NUM_DOUBLE, g_spec.spec))
		ft_double_to_str(format);
	else if (ft_check_the_entry(NUM_OTHER, g_spec.spec))
		ft_other_spec(format);
}

void			ft_work_to_format(const char *format, va_list form)
{
	int			skip_percent;

	skip_percent = 1;
	while (*format)
	{
		if (*format == '%')
		{
			ft_count_sym_to_spec(format + skip_percent);
			ft_define_spec(format + skip_percent);
			ft_work_spec_form(format + skip_percent, form);
			ft_control_var(form);
			format += g_spec.shift_spec + skip_percent;
		}
		else if (*format == '{')
			ft_color_format(format + 1);
		else
		{
			ft_work_buf(format, 1);
			format++;
		}
	}
}
