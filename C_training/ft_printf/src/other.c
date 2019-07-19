/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 08:58:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/19 15:00:00 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					check_the_entry(const char *def_str, const int sym)
{
	if (ft_memchr(def_str, sym, ft_strlen(def_str)))
		return (1);
	else
		return (0);
}

int					str_size_num(const char *format)
{
	int				ret;

	ret = 0;
	while (ft_isdigit(*format++))
		++ret;
	return (ret);
}

int					ismy(char form)
{
	if (((form >= 0 && form < 32) || (form > 32 && form < 35) ||
		form == 37 || form == '%' || form == '$' || form == '&' ||
		form == 40 || form == 41 || form == ',' || form == '/' ||
		(form > 59 && form < 76) || (form > 76 && form < 95) ||
		(form > 95 && form < 104) || (form > 104 && form < 106) ||
		(form > 106 && form < 108) || (form > 108 && form < 116) ||
		(form > 116 && form < 122) || form > 122))
	{
		return (1);
	}
	return (0);
}

int					mem_rec_cmp_for_color(char *str1, char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n-- && ft_tolower(*s1) == *s2)
	{
		++s1;
		++s2;
	}
	return (ft_tolower(*s1) - *s2);
}
