/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 19:18:09 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_define_spec(const char *format_string)
{
	char 		format;

	format_string += g_spec.shift_spec;
	format = *format_string;
	if (ft_memchr(TYPE, format, ft_strlen(TYPE)))
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
		format++;
	}
}

void			ft_work_to_format(const char *format,
	char *buf_printf, va_list form)
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
			ft_control_var(buf_printf, form);
			format += g_spec.shift_spec + skip_percent;
		}
		else
			buf_printf[g_spec.size_write++] = *format++;
	}
	// if (!g_spec.size_buf)
	// {
	// 	//?если буфер переполнился, то выводим содержимое и обнуляем буфер для следующей информации.
	// 	//?тут будет вызываться ф-ия для выгрузки буфера
	// }
}
