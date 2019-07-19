/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_spec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:57:05 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/18 17:52:40 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		define_width(void)
{
	if (g_spec.width > 1)
		g_spec.width -= 1;
}

static char		define_flag_zero(void)
{
	return (g_spec.flags & ZERO ? '0' : ' ');
}

static void		put_width(void)
{
	char		*buf;
	char		sym;

	sym = define_flag_zero();
	define_width();
	if (g_spec.flags & DASH)
	{
		buf = work_buf(&g_spec.spec, 1);
		memset_buf(sym, g_spec.width);
	}
	else
	{
		buf = work_buf(GET_POINT, 0);
		memset_buf(sym, g_spec.width);
		work_buf(&g_spec.spec, 1);
	}
}

void			not_spec(void)
{
	put_width();
}
