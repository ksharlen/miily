/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:05:27 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 16:04:16 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_push_wa(char *buf, int sym)
{
	if (g_spec.width > 1)
	{
		if (g_spec.flags & DASH)
		{
			buf[g_spec.size_write++] = sym;
			ft_memset(buf + g_spec.size_write, ' ', g_spec.width - 1);
		}
		else
		{
			ft_memset(buf + g_spec.size_write, ' ', g_spec.width - 1);
			buf[g_spec.size_write + g_spec.width - 1] = sym;
		}
		g_spec.size_write += g_spec.width;
	}
	else
		buf[g_spec.size_write++] = sym;
}

void	ft_char_to_str(char *buf, char *sym)
{
	ft_push_wa(buf, *sym);
}