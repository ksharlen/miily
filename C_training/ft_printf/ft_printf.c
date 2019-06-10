/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by marvin            #+#    #+#             */
/*   Updated: 2019/06/07 12:52:19 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec g_spec;

int				ft_printf(const char *format, ...)
{
	va_list 	form;
	char		buf_printf[SIZE_BUF_PRINTF];

	va_start(form, format);
//	while (*format)
//	{
		ft_work_to_format(format, buf_printf, form);
		//printf("*format = %c\n", *format);
//		format += g_spec.shift_spec;
		//printf("format = %s\n", format);
//		format += shift_spec;
//	}
	return (0);
}