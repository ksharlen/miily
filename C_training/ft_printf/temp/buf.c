/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:32:28 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/06 10:58:09 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buf.h"

t_buf			g_buf;

static	int		ft_check_loc_buf(int size)
{
	if (SIZE_BUF < size)
		return (-1);
	else if (g_buf.size_buf < size)
		return (1);
	else
		return (0);
}

void			ft_write_buf_and_clean(char *buf)
{
	if (!buf)
		ft_work_buf(NULL, SIZE_BUF - g_buf.size_write + 1);
	else if (g_buf.size_write > 0)
	{
		g_buf.ret_write += write(1, buf, g_buf.size_write);
		ft_bzero(buf, SIZE_BUF);
		g_buf.size_write = 0;
		g_buf.size_buf = SIZE_BUF;
	}
}

static char		*ft_push_buf(char *inbuf, int size_inbuf, char *buf)
{
	char		*ret_buf;

	ret_buf = (buf + g_buf.size_write);
	if (size_inbuf > 0 && inbuf)
	{
		ft_memcpy(buf + g_buf.size_write, inbuf, size_inbuf);
		g_buf.size_buf -= size_inbuf;
		g_buf.size_write += size_inbuf;
		ret_buf = buf + g_buf.size_write;
	}
	return (ret_buf);
}

static void		ft_write_big_data(char **inbuf, int *size_inbuf)
{
	while (*size_inbuf > 0 && *inbuf)
	{
		g_buf.ret_write += write(1, *inbuf, SIZE_BUF);
		*size_inbuf -= SIZE_BUF;
		*inbuf += SIZE_BUF;
		if (*size_inbuf < SIZE_BUF && *size_inbuf > 0)
		{
			g_buf.ret_write += write(1, *inbuf, *size_inbuf);
			*size_inbuf = 0;
			*inbuf = NULL;
		}
	}
}

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
		g_buf.ret_write += write(1, ft_memset(buf, sym, size), size);
	}
	ft_memset(buf, sym, size);
	g_buf.size_write += size;
	g_buf.size_buf -= size;
}

char			*ft_work_buf(char *inbuf, int size_inbuf)
{
	static char buf[SIZE_BUF];
	char 		*ret_buf;
	int			ret_check_loc;
	char		*p_inbuf;

	p_inbuf = inbuf;
	ret_check_loc = ft_check_loc_buf(size_inbuf);
	ret_buf = buf;
	if (ret_check_loc == 1)
	{
		ft_write_buf_and_clean(buf);
		ret_buf = (buf + g_buf.size_write);
	}
	else if (ret_check_loc == -1)
	{
		ft_write_buf_and_clean(buf);
		ft_write_big_data(&p_inbuf, &size_inbuf);
	}
	ret_buf = ft_push_buf(p_inbuf, size_inbuf, buf);
	return (ret_buf);
}