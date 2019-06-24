/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 21:10:37 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			ft_def_spec(const char *format)
{
	if (ft_memchr(TYPE, *format, ft_strlen(TYPE)))
	{
		g_spec.spec = *format;
		++g_spec.shift_spec;
	}
	else
		g_spec.spec = 0;
}

static void			ft_detect_format_size(const char *format)//, size_t *shift_format)
{
	if ((*format) == 'h')
		ft_h_format(format);
	else if (*format == 'l')
		ft_l_format(format);
	else if ((*format) == 'j')
		ft_j_format(format + 1);
	else if ((*format) == 'z')
		ft_z_format(format + 1);
	else if ((*format) == 'L')
		ft_l_big_format(format + 1);
	ft_def_spec(format + g_spec.shift_spec);
}

static void			ft_check_format(const char *format)
{
	size_t			num_before_format;

	//*Тут подумать как реализовать размер формата
	num_before_format = 0;
	while (!(ft_isalpha(*format)) && (*format) &&
		(ft_memchr(UNDEF_BEH, *format, !ft_strlen(UNDEF_BEH))))
	{
		num_before_format++;
		format++;
	}
	g_spec.shift_spec = num_before_format;
	ft_detect_format_size(format);
}

int					ft_work_to_format(const char *format, char *buf_printf, va_list form)
{
	int			ret_check_format;
	char		*test_str;

	while (*format && (g_spec.size_buf--))
	{
		if (*format == '%')
		{
			ft_check_format(format + 1); //*Заполняем spec и size_type;
			ft_control_spec(format + 1);//*Заполняем точность ширину флаги и проверяем совместимость модификатора и спецификатора
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