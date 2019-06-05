/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:50 by marvin            #+#    #+#             */
/*   Updated: 2019/06/05 08:02:15 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# define TYPE "adixogpnsfADXOGS"
# define FLAGS "+- 0#"
# define SIZE_BUF_PRINTF 20

typedef struct			s_spec
{
	int					flags;
	int					width;
	int					accuracy;
}						t_spec;

t_spec					g_spec;

void		ft_work_to_format(const char *format, char *buf_printf, va_list form);
long		ft_control_format_int(va_list form, char *type);
int			ft_printf(const char *format, ...);

#endif
