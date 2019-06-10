/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:30:58 by marvin            #+#    #+#             */
/*   Updated: 2019/06/10 10:30:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long int	ft_int_format(char *type, va_list format)
{
	long long int 		ret;

	ret = 0;
	if (!(ft_strcmp(type, "d")) || !(ft_strcmp(type, "i")))
		ret = va_arg(format, int);
	else if (!(ft_strcmp(type, "ld")) || !(ft_strcmp(type, "li")))
		ret = va_arg(format, long int);
	else if (!(ft_strcmp(type, "lld")) || !(ft_strcmp(type, "lli")))
		ret = va_arg(format, long long int);
	else if (!(ft_strcmp(type, "hd")) || !(ft_strcmp(type, "hi")))
		ret = (short)va_arg(format, int);
	else if (!(ft_strcmp(type, "hhd")) || !(ft_strcmp(type, "hhi")))
		ret = (char)va_arg(format, int);
	else if (!(ft_strcmp(type, "jd")) || !(ft_strcmp(type, "ji")))
		ret = va_arg(format, intmax_t);
	else if (!(ft_strcmp(type, "zd")) || !(ft_strcmp(type, "zi")))
		ret = va_arg(format, ssize_t);
	return (ret);
}

static long long int	ft_u_format(char *type, va_list format)
{
	long long int		ret;

	ret = 0;
	if (!(ft_strcmp(type, "u")))
		ret = va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "lu")))
		ret = va_arg(format, unsigned long int);
	else if (!(ft_strcmp(type, "llu")))
		ret = va_arg(format, unsigned long long int);
	else if (!(ft_strcmp(type, "hu")))
		ret = (unsigned short)va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "hhu")))
		ret = (unsigned char)va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "ju")))
		ret = va_arg(format, uintmax_t);
	else if (!ft_strcmp(type, "zu"))
		ret = va_arg(format, size_t);
	return (ret);
}

static long long int	ft_o_x_format(char *type, va_list format)
{
	long long int	ret;

	ret = 0;
	if (!(ft_strcmp(type, "x")) || !(ft_strcmp(type, "o")))
		ret = va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "lx")) || !(ft_strcmp(type, "lo")))
		ret = va_arg(format, unsigned long int);
	else if (!(ft_strcmp(type, "llx")) || !(ft_strcmp(type, "llo")))
		ret = va_arg(format, unsigned long long int);
	else if (!(ft_strcmp(type, "hx")) || !(ft_strcmp(type, "ho")))
		ret = (unsigned short)va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "hhx")) || !(ft_strcmp(type, "hho")))
		ret = (unsigned char)va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "jx")) || !(ft_strcmp(type, "jo")))
		ret = va_arg(format, uintmax_t);
	else if (!(ft_strcmp(type, "zx")) || !(ft_strcmp(type, "zo")))
		ret = va_arg(format, size_t);
	return (ret);
}

static long long int	ft_o_x_big_format(char *type, va_list format)
{
	long long int	ret;

	ret = 0;
	if (!(ft_strcmp(type, "X")) || !(ft_strcmp(type, "O")))
		ret = va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "lX")) || !(ft_strcmp(type, "lO")))
		ret = va_arg(format, unsigned long int);
	else if (!(ft_strcmp(type, "llX")) || !(ft_strcmp(type, "llO")))
		ret = va_arg(format, unsigned long long int);
	else if (!(ft_strcmp(type, "hX")) || !(ft_strcmp(type, "hO")))
		ret = (unsigned short)va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "hhX")) || !(ft_strcmp(type, "hhO")))
		ret = (unsigned char)va_arg(format, unsigned int);
	else if (!(ft_strcmp(type, "jX")) || !(ft_strcmp(type, "jO")))
		ret = va_arg(format, uintmax_t);
	else if (!(ft_strcmp(type, "zX")) || !(ft_strcmp(type, "zO")))
		ret = va_arg(format, size_t);
	return (ret);
}

long long int		ft_num_int(va_list form, char *type)
{
	char 			*p_char;
	long long int	ret;

	p_char = NULL;
	if (g_spec.mod == 'd' || g_spec.mod == 'i')
		ret = ft_int_format(type, form);
	else if (g_spec.mod == 'x' || g_spec.mod == 'o')
		ret = ft_o_x_format(type, form);
	else if (g_spec.mod == 'X' || g_spec.mod == 'O')
		ret = ft_o_x_big_format(type, form);
	else if (g_spec.mod == 'u')
		ret = ft_u_format(type, form);
	return (ret);
}