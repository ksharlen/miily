/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_to_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:42:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/03 16:46:38 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

static char			*ft_check_format(const char *format)
{
	char 			*str_form;
	char			**str_size;
	size_t			num_before_format;
	char			*ret;

	str_form = "acdefoxpns";
	str_size = "ll", "hh", "h", "l";
	ret = NULL;
	num_before_format = 0;
	while (!(ft_isalpha(*format++)) && (*format))
		num_before_format++;
	ret = (ft_memisstr(format, str_form, ) ? format + num_before_format : NULL);
	return (ret);
}

void			ft_work_to_format(const char *format, char *buff, va_list form)
{
	char 		*start_format;
	char 		*p_format;
	size_t		i;

	start_format = format;
	i = 0;
	while (*format)
	{
		((*format == '%') ? (p_format = ft_check_format(format + 1)) : (buff[i] = *format));
		if (p_format)
		{
			ft_trans(format + 1, buff, p_format - format, form); //? третий аргумент это размер спецификатора формата.
		}
	}
}