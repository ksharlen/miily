/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:05:27 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/29 11:23:37 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_push_wa(char *sym)
{
	char *buf;

	if (g_spec.width > 1)
	{
		if (g_spec.flags & DASH)
		{
			buf = ft_work_buf(sym, 1);
			//buf[g_spec.size_write++] = sym;
			ft_memset(buf, ' ', g_spec.width - 1);
			g_spec.size_write += (g_spec.width - 1);
		}
		else
		{
			buf = ft_work_buf(GET_POINT, 0);
			ft_memset(buf, ' ', g_spec.width - 1);
			g_spec.size_write += (g_spec.width - 1);
			ft_work_buf(sym, 1);
			//buf[g_spec.size_write + g_spec.width - 1] = sym;
		}
		//g_spec.size_write += g_spec.width;
	}
	else
		ft_work_buf(sym, 1);
}

void	ft_char_to_str(char *sym)
{
	//printf("char to str = %c\n", *sym);
	ft_write_buf_and_clean(WRITE_BUF);
	exit(0);
	ft_push_wa(sym);
}