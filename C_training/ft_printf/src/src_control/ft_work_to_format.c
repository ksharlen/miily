/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/06 10:51:20 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*ft_l_format(const char *format)
{
	if (!(ft_check_size_format(*(format + 1))))
	{
		if ((*(++format) == 'l') && (!(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1)))))
		{
			if (ft_strchr(TYPE, *(++format)))
				return (ft_memnjoin("ll", format, 2, 1));
		}
		else if (ft_strchr(TYPE, *format))
			return (ft_memnjoin("l", format, 1, 1));
		else
			return (NULL);
	}
	return (NULL);
}

static char			*ft_h_format(const char *format)
{
	if (!(ft_check_size_format(*(format + 1))))
	{
		if ((*(++format) == 'h') && (!(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1)))))
		{
			if (ft_strchr(TYPE, *(++format)))
				return (ft_memnjoin("hh", format, 2, 1));
		}
		else if (ft_strchr(TYPE, *format))
			return (ft_memnjoin("h", format, 1, 1));
		else
			return (NULL);
	}
	return (NULL);
}

#include "ft_printf.h"

static char			*ft_detect_format_size(const char *format)//, size_t *shift_format)
{
	char			*ret_format;

	if ((*format) == 'h' && !(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1))))
		return (ft_h_format(format));
	else if (*format == 'l' && !(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1))))
		return (ft_l_format(format));
	else if (ft_memchr(TYPE, *format, ft_strlen(TYPE)))
		return (ft_strsub(format, 0, 1));
	else
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
	test_format = ft_detect_format_size(format);//, &shift_format);
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