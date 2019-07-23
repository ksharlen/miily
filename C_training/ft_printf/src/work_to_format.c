/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_to_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:06:53 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/23 08:50:50 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		define_spec(const char *format_string)
{
	format_string += g_spec.shift_spec;
	g_spec.spec = *format_string;
}

static void		count_sym_to_spec(const char *format)
{
	g_spec.shift_spec = 0;
	g_spec.spec = 0;
	while (!ismy(*format) && *format)
	{
		++g_spec.shift_spec;
		++format;
	}
}

static void		control_var(va_list format)
{
	if (check_the_entry(NUM_INT, g_spec.spec))
		select_num_sys(format);
	else if (check_the_entry(NUM_STRING, g_spec.spec))
	{
		if (g_spec.spec == 'c' || g_spec.spec == 'C')
			char_to_str(format);
		else if (g_spec.spec == 's' || g_spec.spec == 'S')
			str_to_str(format);
	}
	else if (check_the_entry(NUM_DOUBLE, g_spec.spec))
		double_to_str(format);
	else if (check_the_entry(NUM_OTHER, g_spec.spec))
		other_spec(format);
	else
		not_spec();
}

static void		call_fun_format(const char *format, va_list form)
{
	if (*format)
	{
		count_sym_to_spec(format);
		define_spec(format);
		work_spec_form(format, form);
		control_var(form);
	}
	g_spec.shift_spec += (g_spec.spec ? 1 : 0);
}

void			work_to_format(const char *format, va_list form)
{
	while (*format)
	{
		//printf("1\n");
		if (*format == '%')
		{
			++format;
			call_fun_format(format, form);
			format += g_spec.shift_spec;
// printf("spec = %c\n", g_spec.spec);
// printf("mod = %d\n", g_spec.mod);
// printf("accuracy = %d\n", g_spec.accuracy);
// printf("width = %d\n", g_spec.width);
// printf("shift_spec = %ld\n", g_spec.shift_spec);
// printf("size_write = %d\n", g_spec.size_write);
// printf("ret_printf = %d\n", g_spec.ret_printf);
		}
		else
		{
			if (*format == '{' && *(format + 1) == '/' &&
				(g_spec.shift_spec = color_format(format + 2)) > 2)
			{
				format += g_spec.shift_spec;
				g_spec.ret_printf -= g_spec.shift_spec;
			}
			else
			{
				work_buf((unsigned char *)format, 1);
				format++;
			}
		}
	}
}
