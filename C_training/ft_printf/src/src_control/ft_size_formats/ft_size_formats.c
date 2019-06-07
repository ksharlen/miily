/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_formats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:11:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/07 08:48:57 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_l_format(const char *format)
{
	if (!(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1))))
	{
		if ((*(++format) == 'l') && (!(ft_strchr(DOES_NOT_SUPPORT_LONG, *(format + 1)))) && *(format + 1) != 'f')
		{
			if (ft_strchr(TYPE, *(++format)))
				return (ft_memnjoin("ll", format, 2, 1));
		}
		else if (ft_strchr(TYPE, *format))
			return (ft_memnjoin("l", format, 1, 1));
		else
			return (NULL);
	}
	return (NULL);
}

char			*ft_h_format(const char *format)
{
	if (!(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1))))
	{
		if ((*(++format) == 'h') && (!(ft_strchr(DOES_NOT_SUPPORT_SHORT, *(format + 1)))))
		{
			if (ft_strchr(TYPE, *(++format)))
				return (ft_memnjoin("hh", format, 2, 1));
		}
		else if (ft_strchr(TYPE, *format))
			return (ft_memnjoin("h", format, 1, 1));
		else
			return (NULL);
	}
	return (NULL);
}

char		*ft_j_format(const char *format)
{
	if (ft_strchr(TYPE, *format))
		return (ft_memnjoin("j", format, 1, 1));
	return (NULL);
}

char		*ft_z_format(const char *format)
{
	if (ft_strchr(TYPE, *format))
		return (ft_memnjoin("z", format, 1, 1));
	return (NULL);
}

char		*ft_l_big_format(const char *format)
{
	if (ft_strchr(TYPE, *format))
		return (ft_memnjoin("L", format, 1, 1));
	return (NULL);
}