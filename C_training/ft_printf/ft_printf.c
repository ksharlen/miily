/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by marvin            #+#    #+#             */
/*   Updated: 2019/06/13 08:18:13 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec g_spec;

int				ft_printf(const char *format, ...)
{
	va_list 	form;
	char		buf_printf[SIZE_BUF_PRINTF];

	g_spec.size_write = 0;
	g_spec.paste = 0;
	g_spec.size_buf = SIZE_BUF_PRINTF;
	ft_bzero(buf_printf, SIZE_BUF_PRINTF);
	va_start(form, format);
//	while (*format)
//	{
	ft_work_to_format(format, buf_printf, form);
	//printf("buf = %s\n", buf_printf);
	//printf("size_write = %ld\n", g_spec.size_spec + g_spec.size_write);
	//write(1, buf_printf, g_spec.size_spec + g_spec.size_write);
	g_spec.ret_printf = write(1, buf_printf, g_spec.size_write);
	//printf("size_write = %ld\n", g_spec.size_write);

		//printf("*format = %c\n", *format);
//		format += g_spec.shift_spec;
		//printf("format = %s\n", format);
//		format += shift_spec;
//	}
	return (g_spec.ret_printf);
}