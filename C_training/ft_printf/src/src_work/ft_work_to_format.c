/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/19 16:27:44 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			ft_detect_format_size(const char *format)//, size_t *shift_format)
{
	if ((*format) == 'h' && !(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1))))
		return (ft_h_format(format));
	else if (*format == 'l' && !(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1))))
		return (ft_l_format(format));
	else if ((*format) == 'j' && !(ft_strchr(DOES_NOT_SUPPORT_INT_MAX, *(format + 1))))
		return (ft_j_format(format + 1));
	else if ((*format) == 'z' && !(ft_strchr(DOES_NOT_SUPPORT_SIZE_T, *(format + 1))))
		return (ft_z_format(format + 1));
	else if ((*format) == 'L' && !(ft_strchr(DOES_NOT_SUPPORT_L, *(format + 1))))
		return (ft_l_big_format(format + 1));
	else if (ft_memchr(TYPE, *format, ft_strlen(TYPE)))
	{
		g_spec.spec = *format;
		g_spec.shift_spec += 1;
		g_spec.size_type = NULL;
		return (1);
	}
	return (0);
}

static int			ft_check_format(const char *format)
{
	size_t			num_before_format;
	int				ret;

	ret = 0;
	num_before_format = 0;
	while (!(ft_isalpha(*format)) && (*format))
	{
		num_before_format++;
		format++;
	}
	g_spec.shift_spec = num_before_format;
	ret = ft_detect_format_size(format);
	return (ret);
}

int					ft_work_to_format(const char *format, char *buf_printf, va_list form)
{
	int			ret_check_format;
//	size_t		i;
	char		*test_str;

//	i = 0;
	while (*format && (g_spec.size_buf--))
	{
		if (*format == '%')
		{
			ret_check_format = ft_check_format(format + 1); //!Тут будет условие если формат не поддерживается.
			//?Тут будут ф-ии для преобразования и определения точности и строки.
			ft_control_spec(format + 1);//?записываем значения найденных спецификаторов
			format += g_spec.shift_spec + 1; //!где 1 это % //Это будет в конце условия
			//printf("g_spec.shift_spec = %ld\n", g_spec.shift_spec);
			ft_control_var(buf_printf, form);
		}
		else
			buf_printf[g_spec.size_write++] = *format++;
	}
	if (!g_spec.size_buf)
	{
		//?если буфер переполнился, то выводим содержимое и обнуляем буфер для следующей информации.
	}
//	write(1, buf_printf, g_spec.size_write);
//	printf("size_write = %ld\n", g_spec.size_write);
	//printf("buf = %s\nsize_write = %ld\n", buf_printf, g_spec.size_write);
	//printf("size_write = %ld\n", g_spec.index_buf);
	printf("plus = %d\n", g_spec.flags & PLUS);
	printf("width = %d\n", g_spec.width);
	printf("acc = %d\n", g_spec.accuracy);
	return (ret_check_format);
}

//*Ф-ия будет возвращать кол-во выведенных байт.