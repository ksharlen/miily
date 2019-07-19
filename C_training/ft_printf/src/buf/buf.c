/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 08:55:01 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/18 17:19:43 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				check_loc_buf(int size)
{
	if (SIZE_BUF < size)
		return (-1);
	else if (g_spec.size_buf < size)
		return (1);
	else
		return (0);
}

void			write_buf_and_clean(char *buf)
{
	if (!buf)
		work_buf(NULL, SIZE_BUF - g_spec.size_write + 1);
	else if (g_spec.size_write > 0)
	{
		g_spec.ret_printf += write(g_spec.fd, buf, g_spec.size_write);
		ft_bzero(buf, SIZE_BUF);
		g_spec.size_write = 0;
		g_spec.size_buf = SIZE_BUF;
	}
}

static char		*ft_push_buf(const char *inbuf, int size_inbuf, char *buf)
{
	char		*ret_buf;

	ret_buf = (buf + g_spec.size_write);
	if (size_inbuf > 0 && inbuf)
	{
		ft_memcpy(buf + g_spec.size_write, inbuf, size_inbuf);
		g_spec.size_buf -= size_inbuf;
		g_spec.size_write += size_inbuf;
		ret_buf = buf + g_spec.size_write;
	}
	return (ret_buf);
}

static void		ft_write_big_data(const char **inbuf, int *size_inbuf)
{
	while (*size_inbuf > 0 && *inbuf)
	{
		g_spec.ret_printf += write(g_spec.fd, *inbuf, SIZE_BUF);
		*size_inbuf -= SIZE_BUF;
		*inbuf += SIZE_BUF;
		if (*size_inbuf < SIZE_BUF && *size_inbuf > 0)
		{
			g_spec.ret_printf += write(g_spec.fd, *inbuf, *size_inbuf);
			*size_inbuf = 0;
			*inbuf = NULL;
		}
	}
}

char			*work_buf(const char *inbuf, int size_inbuf)
{
	static char buf[SIZE_BUF];
	char		*ret_buf;
	int			ret_check_loc;
	const char	*p_inbuf;

	p_inbuf = inbuf;
	ret_check_loc = check_loc_buf(size_inbuf);
	if (ret_check_loc == 1)
	{
		write_buf_and_clean(buf);
		ret_buf = (buf + g_spec.size_write);
	}
	else if (ret_check_loc == -1)
	{
		write_buf_and_clean(buf);
		ft_write_big_data(&p_inbuf, &size_inbuf);
	}
	ret_buf = ft_push_buf(p_inbuf, size_inbuf, buf);
	return (ret_buf);
}
