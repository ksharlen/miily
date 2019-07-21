/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:05:27 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/21 10:31:43 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static wchar_t		get_arg(va_list format)
{
	return (va_arg(format, wchar_t));
}

static void			push_buf_sa(t_utf utf)
{
	push_wchar_to_buf(utf);
	memset_buf(' ', g_spec.width);
}

static void			push_buf_as(t_utf utf)
{
	char			for_zero;

	for_zero = ' ';
	if (g_spec.flags & ZERO)
		for_zero = '0';
	memset_buf(for_zero, g_spec.width);
	push_wchar_to_buf(utf);
}

static void			push_buf(t_utf utf)
{
	if (g_spec.width > 1)
	{
		g_spec.width -= 1;
		if (g_spec.flags & DASH)
			push_buf_sa(utf);
		else
			push_buf_as(utf);
	}
	else
		push_wchar_to_buf(utf);
}

void				char_to_str(va_list format)
{
	t_utf			utf;

	utf.unicode = get_arg(format);
	utf.bytes = def_num_bytes(utf.unicode);
	utf.utf_sym = inst_mask(utf);
	utf = push_unicode(utf);
	push_buf(utf);
}
