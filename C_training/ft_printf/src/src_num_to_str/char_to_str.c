/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:05:27 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/06 12:07:07 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static wchar_t	ft_get_va_arg(va_list format)
{
	return (va_arg(format, wchar_t));
}

static void	ft_push_buf_sa(t_utf utf)
{
	unsigned char	*buf;

	buf = push_wchar_to_buf(utf);
	memset_buf(' ', g_spec.width);
}

static void	ft_push_buf_as(t_utf utf)
{
	unsigned char	*buf;
	char	for_zero;

	for_zero = ' ';
	if (g_spec.flags & ZERO)
		for_zero = '0';
	buf = work_buf(GET_POINT, 0);
	memset_buf(for_zero, g_spec.width);
	push_wchar_to_buf(utf);
}

static void	ft_push_buf(t_utf utf)
{
	if (g_spec.width > 1)
	{
		g_spec.width -= 1;
		if (g_spec.flags & DASH)
			ft_push_buf_sa(utf);
		else
			ft_push_buf_as(utf);
	}
	else
		push_wchar_to_buf(utf);
}

//Подумать над реализацией побайтного выреза символа

void		char_to_str(va_list format)
{
	t_utf utf;

	utf.unicode = ft_get_va_arg(format);
	utf.bytes = def_num_bytes(utf.unicode);
	utf.utf_sym = inst_mask(utf);
	utf = push_unicode(utf);
	ft_push_buf(utf);
}
