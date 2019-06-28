/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by marvin            #+#    #+#             */
/*   Updated: 2019/06/28 13:37:18 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec 			g_spec;

int				ft_printf(const char *format, ...)
{
	va_list 	form;
	char		buf_printf[SIZE_BUF_PRINTF];

	g_spec.size_write = 0;
	g_spec.size_buf = SIZE_BUF_PRINTF;
	ft_bzero(buf_printf, SIZE_BUF_PRINTF);
	va_start(form, format);
	ft_work_to_format(format, buf_printf, form);
	g_spec.ret_printf = write(1, buf_printf, g_spec.size_write);
	return (g_spec.ret_printf);
}