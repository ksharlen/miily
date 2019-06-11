/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/11 09:53:22 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*ft_detect_format_size(const char *format)//, size_t *shift_format)
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
		g_spec.mod = *format;
		g_spec.shift_spec += 1;
		return (ft_strsub(format, 0, 1));
	}
	return (NULL);
}

static char			*ft_check_format(const char *format)
{
	size_t			num_before_format;
	char			*ret;

	ret = NULL;
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

char			*ft_work_to_format(const char *format, char *buf_printf, va_list form)
{
	char 		*p_format;
	size_t		i;
	char		*test_str;

	i = 0;
	p_format = NULL;
	while (*format)
	{
		if (*format == '%')
		{
			p_format = ft_check_format(format + 1); //!Тут будет условие если формат не поддерживается.
			//?Тут будут ф-ии для преобразования и определения точности и строки.

			ft_control_spec(format + 1);//?записываем значения найденных спецификаторов
			format += g_spec.shift_spec + 1; //!где 1 это % //Это будет в конце условия
			printf("format = %c\n", g_spec.mod);
			ft_control_var(buf_printf, form, p_format);
//			test_str = ft_num2binary(g_spec.flags);
//			printf("g_spec.flags = %s\n", test_str);
			printf("width = %d\naccuracy = %d\n", g_spec.width, g_spec.accuracy);
		}
		else
		{
			buf_printf[i++] = *format++;
			++g_spec.size_write;
		}
	}
//	write(1, buf_printf, g_spec.size_write);
//	printf("size_write = %ld\n", g_spec.size_write);
	//printf("buf = %s\nsize_write = %ld\n", buf_printf, g_spec.size_write);
	return (p_format);
}

//*Ф-ия будет возвращать кол-во выведенных байт.