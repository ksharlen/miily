/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by marvin            #+#    #+#             */
/*   Updated: 2019/07/22 12:58:15 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec			g_spec;

int				ft_printf(const char *format, ...)
{
	va_list		form;
	int			ret;

	g_spec.ret_printf = 0;
	g_spec.fd = 1;
	g_spec.size_write = 0;
	g_spec.size_buf = SIZE_BUF;
	va_start(form, format);
	work_to_format(format, form);
	write_buf_and_clean(WRITE_BUF);
	va_end(form);
	if (!(ret = g_spec.ret_printf))
		ret = -1;
	g_spec.ret_printf = 0;
	g_spec.fd = 1;
	g_spec.spec = 0;
	return (ret);
}
