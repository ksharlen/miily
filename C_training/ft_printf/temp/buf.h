/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:30:51 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 22:52:40 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUF_H
# define BUF_H

#include "libft.h"

#define SIZE_BUF 5

char	*ft_work_buf(char *inbuf, int size_inbuf);
void	ft_write_from_buf(const char *buf);

typedef struct		s_buf
{
	int				size_buf;
	int				size_write;
	int				ret_write;
}					t_buf;

extern t_buf		g_buf;

#endif