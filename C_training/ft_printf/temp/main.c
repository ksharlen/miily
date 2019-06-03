/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/03 11:42:07 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>

int				ft_printf(const char *format, ...)
{
	char 		buff[100000000];
	va_list		form;

	va_start(form, format);
	test(format, buff, form); //? format - строка, form - перменные
}

void			ft_work_to_format(const char *format, char *buff, va_list form)
{
	char 		*start_format;
	char 		*p_format;
	size_t		i;

	start_format = format;
	i = 0;
	while (*format)
	{
		((*format == '%') ? (p_format = ft_check_format(format)) : (buff[i] = *format));
		if (p_format)
		{
			ft_trans(format + 1, buff, p_format - format, form); //? третий аргумент это размер спецификатора формата.
		}
	}
}

int				main(void)
{
	ft_printf("hello");
}
