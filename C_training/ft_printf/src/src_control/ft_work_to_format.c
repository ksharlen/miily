/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/05 17:01:02 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*ft_detect_format_size(const char *format, size_t *shift_format)
{
	if ((*format == 'l') && ((*(format + 1)) != 'p') && ((*(format + 1) != 'n')))
	{
		if (*(++format) == 'l')
			if (ft_strchr(TYPE, *(++format)))
			{
				*shift_format = 2;
				return (ft_memnjoin("ll", format, 2, 1));
			}
		return (ft_memnjoin("l", format, 1, 1));
	}
	else if (*format == 'h')
	{
		if (*(++format) == 'h')
			if (ft_strchr(TYPE, *format))
				return (ft_memnjoin("hh", format, 2, 1));
		return (ft_memnjoin("h", format, 1, 1));
	}
	else
	{
		if (ft_strchr(TYPE, *format))
			return (ft_strsub(format, 0, 1));
	}
	return (NULL);
}

static char			*ft_check_format(const char *format)
{
	size_t			num_before_format;
	char			*ret;
	char			*test_format;
	size_t			shift_format;

	shift_format = 0;
	ret = NULL;
	num_before_format = 0;
	while (!(ft_isalpha(*format)) && (*format))
	{
		num_before_format++;
		format++;
	}
	test_format = ft_detect_format_size(format, &shift_format);
	printf("test_format = %s\nnum_before_format = %ld\n", test_format, num_before_format);
	//exit(1);
	return (ret);
}

void			ft_work_to_format(const char *format, char *buf_printf, va_list form)
{
	const char 	*start_format;
	char 		*p_format;
	size_t		i;

	start_format = format;
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			p_format = ft_check_format(format + 1);
			//ft_control_spec()
		}
		else
			buf_printf[i] = *format;
		++i;
		format++;
	}
}