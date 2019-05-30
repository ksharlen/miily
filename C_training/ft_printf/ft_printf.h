/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:50 by marvin            #+#    #+#             */
/*   Updated: 2019/05/30 11:42:29 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

typedef union 			test
{
	long long			ll;
	unsigned long long	llu;
	long				l;
	unsigned long		lu;
	int					d;
	unsigned int		u;
	short 				hd;
	unsigned short		hhd;
//	char				c;
	unsigned char 		c;
}						type;

int		ft_printf(const char *format, ...);

#endif
 