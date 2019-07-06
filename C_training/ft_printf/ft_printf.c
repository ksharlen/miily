/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by marvin            #+#    #+#             */
/*   Updated: 2019/07/06 10:06:07 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec			g_spec;

int				ft_printf(const char *format, ...)
{
	va_list		form;
	int			ret;

	g_spec.fd = 1;
	g_spec.size_write = 0;
	g_spec.size_buf = SIZE_BUF;
	va_start(form, format);
	ft_work_to_format(format, form);
	ft_write_buf_and_clean(WRITE_BUF);
	va_end(form);
	ret = g_spec.ret_printf;
	g_spec.ret_printf = 0;
	//printf("fd = %d\n", g_spec.fd);
	//printf("spec = %c\n", g_spec.spec);
	g_spec.fd = 1;
	printf("spec = %c\n", g_spec.spec);
	return (ret);
}
