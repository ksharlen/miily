/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:32:45 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/01 11:04:08 by ksharlen         ###   ########.fr       */
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

	ft_work_buf("hello world\n", ft_strlen("hello world"));
	ft_memset_buf('0', 13);
	ft_write_buf_and_clean(NULL);
	return (0);
}