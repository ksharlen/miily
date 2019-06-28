/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:05:27 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 13:23:13 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_push_wa(char *buf, int sym)
{
	if (g_spec.width > 1 && g_spec.flags & DASH)
	{
		buf[g_spec.size_write++] = sym;
		ft_memset(buf + g_spec.size_write, ' ', g_spec.width - 1);
	}
	else if (g_spec.width > 1)
	{
		ft_memset(buf, ' ', g_spec.width - 1);
		buf[g_spec.width] = sym;
	}
	g_spec.size_write += ++g_spec.width;
}

void	ft_char_to_str(char *buf, char *sym)
{
	ft_push_wa(buf, *sym);
}