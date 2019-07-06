/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_buf_by_hand.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:56:35 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/06 11:12:22 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_memset_buf(int sym, int size)
{
	char 	*buf;
	int 	ret_check_loc;

	buf = ft_work_buf(NULL, 0);
	ret_check_loc = ft_check_loc_buf(size);
	if (ret_check_loc == 1)
		ft_write_buf_and_clean(NULL);
	else if (ret_check_loc == -1)
	{
		ft_write_buf_and_clean(NULL);
		g_spec.ret_printf += write(g_spec.fd, ft_memset(buf, sym, size), size);
	}
	else
	{
		ft_memset(buf, sym, size);
		g_spec.size_write += size;
		g_spec.size_buf -= size;
	}
}