/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/26 16:16:34 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_def_spec(char format)
{
	if (ft_memchr(TYPE, format, ft_strlen(TYPE)))
	{
		g_spec.spec = format;
		++g_spec.shift_spec;
	}
	else
		g_spec.spec = 0;
}

static void			ft_check_format(const char *format)
{
	g_spec.shift_spec = 0;
	while (!ft_ismy(*format) && *format)
	{
		++g_spec.shift_spec;
		format++;
	}
	ft_def_spec(*format);
}

int					ft_work_to_format(const char *format, char *buf_printf, va_list form)
{
	int			ret_check_format;
	char		*test_str;

	while (*format && (g_spec.size_buf--))
	{
		if (*format == '%')
		{
			ft_check_format(format + 1); //*Заполняем spec;
			ft_control_spec(format + 1, form);//*Заполняем точность ширину флаги и проверяем совместимость модификатора и спецификатора
			format += g_spec.shift_spec + 1; //!где 1 это % //Это будет в конце условия
			ft_control_var(buf_printf, form);
		}
		else
			buf_printf[g_spec.size_write++] = *format++;
	}
	if (!g_spec.size_buf)
	{
		//?если буфер переполнился, то выводим содержимое и обнуляем буфер для следующей информации.
		//?тут будет вызываться ф-ия для выгрузки буфера
	}
	return (1);
}

//*Ф-ия будет возвращать кол-во выведенных байт.