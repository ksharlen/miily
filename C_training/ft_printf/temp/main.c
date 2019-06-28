/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:32:45 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 23:13:49 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buf.h"

int			main(void)
{
	char *buf;
	char *str;

	str = "test str num2\n";
	g_buf.size_write = 0;
	g_buf.size_buf = SIZE_BUF;
	g_buf.ret_write = 0;

	ft_work_buf(str, ft_strlen(str));
	ft_write_from_buf(NULL);
	printf("ret_write = %d", g_buf.ret_write);
	//printf("buf = %s\n", buf);
	// ft_write_from_buf(NULL);
	// ft_work_buf(str, ft_strlen(str));
	// ft_write_from_buf(NULL);
	// ft_memset(buf, '0', 5);
	// g_buf.size_write += 5;
	// g_buf.size_buf -= 5;
	// ft_write_from_buf(NULL);
	return (0);
}