/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:30:51 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/01 11:05:26 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUF_H
# define BUF_H

#include "libft.h"

#define SIZE_BUF 100
#define WRITE_BUF NULL

char	*ft_work_buf(char *inbuf, int size_inbuf);
void	ft_write_buf_and_clean(char *buf);
void	ft_memset_buf(int sym, int size);

typedef struct		s_buf
{
	int				size_buf;
	int				size_write;
	int				ret_write;
}					t_buf;

extern t_buf		g_buf;

#endif