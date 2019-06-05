/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:15:04 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/05 14:51:55 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# define TYPE "adixogpnsfADXOGS"
# define SIZE_BUF_PRINTF 20
# define ZERO	1
# define PLUS	2
# define DEC	4
# define SPACE	8
# define HASH	16

typedef struct			s_spec
{
	short				flags;
	int					width;
	int					accuracy;
}						t_spec;

extern t_spec			g_spec;

void		ft_work_to_format(const char *format, char *buf_printf, va_list form);
long		ft_control_format_int(va_list form, char *type);
int			ft_printf(const char *format, ...);

#endif
