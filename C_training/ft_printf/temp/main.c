/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:32:45 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/30 00:00:05 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buf.h"

int			main(void)
{
	char *buf;
	char *str;

	str = "hello world how are you?\nFine and you?\nMe tooo ahahahahaha\n";
	g_buf.size_write = 0;
	g_buf.size_buf = SIZE_BUF;
	g_buf.ret_write = 0;

	buf = ft_work_buf(NULL, 0);
	ft_memset(buf, 'a', 3);
	g_buf.size_write += 3;
	g_buf.size_buf -= 3;
	//ft_work_buf("test\n", 5);
	ft_write_buf_and_clean(NULL);
	//ft_work_buf(str, ft_strlen(str));
	//ft_write_buf_and_clean(WRITE_BUF);
	//printf("g_buf.size_buf = %d\ng_buf.size_write = %d\n", g_buf.size_buf, g_buf.size_write);
	//ft_write_from_buf_and_clean(WRITE_BUF);
	return (0);
}