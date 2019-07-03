/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_spec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 13:10:49 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/03 12:26:54 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		*ft_get_va_arg(va_list format)
{
	void		*n;

	if (g_spec.mod == DASH)
		n = va_arg(format, long int *);
	else if (g_spec.mod == ZERO)
		n = (char *)va_arg(format, int *);
	else if (g_spec.mod == PLUS)
		n = (short *)va_arg(format, int *);
	else if (g_spec.mod == SPACE)
		n = va_arg(format, long long int *);
	else if (g_spec.mod == HASH)
		n = va_arg(format, intmax_t *);
	else if (g_spec.mod == DOT)
		n = va_arg(format, ssize_t *);
	else if (g_spec.mod == DEC)
		n = va_arg(format, ptrdiff_t *);
	else
		n = va_arg(format, int *);
	return (n);
}

static void		ft_push_n_format(void **p_n)
{
	if (g_spec.mod == DASH)
		**((long int **)p_n) = g_spec.size_write + g_spec.ret_printf;
	else if (g_spec.mod == ZERO)
		**((char **)p_n) = g_spec.size_write + g_spec.ret_printf;
	else if (g_spec.mod == PLUS)
		**((short **)p_n) = g_spec.size_write + g_spec.ret_printf;
	else if (g_spec.mod == SPACE)
		**((long long int **)p_n) = g_spec.size_write + g_spec.ret_printf;
	else if (g_spec.mod == HASH)
		**((intmax_t **)p_n) = g_spec.size_write + g_spec.ret_printf;
	else if (g_spec.mod == DOT)
		**(ssize_t **)p_n = g_spec.size_write + g_spec.ret_printf;
	else if (g_spec.mod == DEC)
		**((ptrdiff_t **)p_n) = g_spec.size_write + g_spec.ret_printf;
	else
		**((int **)p_n) = g_spec.size_write + g_spec.ret_printf;
}

void			ft_other_spec(va_list format)
{
	void		*n;

	if (g_spec.spec == 'n')
	{
		n = ft_get_va_arg(format);
		ft_push_n_format(&n);
	}
}
