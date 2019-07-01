/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_num_sys.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 19:25:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/01 11:26:02 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long int		pull_signed_int_arg(va_list format)
{
	long long int			ret;

	ret = 0;
	if (g_spec.mod == ZERO)
		ret = (char)va_arg(format, int);
	else if (g_spec.mod == PLUS)
		ret = (short)va_arg(format, int);
	else if (g_spec.mod == DASH)
		ret = va_arg(format, long int);
	else if (g_spec.mod == SPACE)
		ret = va_arg(format, long long);
	else if (g_spec.mod == HASH)
		ret = va_arg(format, intmax_t);
	else if (g_spec.mod == DOT)
		ret = va_arg(format, ssize_t);
	else if (g_spec.mod == DEC)
		ret = va_arg(format, ptrdiff_t);
	else if (g_spec.spec == 'D' && !g_spec.mod)
		ret = va_arg(format, long int);
	else
		ret = va_arg(format, int);
	return (ret);
}

static unsigned long long	pull_unsigned_int_arg(va_list format)
{
	unsigned long long int	ret;

	ret = 0;
	if (g_spec.mod == ZERO)
		ret = (unsigned char)va_arg(format, unsigned int);
	else if (g_spec.mod == PLUS)
		ret = (unsigned short)va_arg(format, unsigned int);
	else if (g_spec.mod == DASH)
		ret = va_arg(format, unsigned long);
	else if (g_spec.mod == SPACE)
		ret = va_arg(format, unsigned long long);
	else if (g_spec.mod == HASH)
		ret = va_arg(format, uintmax_t);
	else if (g_spec.mod == DOT || g_spec.mod == DEC)
		ret = va_arg(format, size_t);
	else if ((g_spec.spec == 'U' || g_spec.spec == 'O') && !g_spec.mod)
		ret = va_arg(format, unsigned long);
	else
		ret = va_arg(format, unsigned int);
	return (ret);
}

static int					ft_define_num_sys(void)
{
	int 					ret;

	if (g_spec.spec == 'x' || g_spec.spec == 'X' || g_spec.spec == 'p')
		ret = HEX;
	else if (g_spec.spec == 'o' || g_spec.spec == 'O')
		ret = OCT;
	else if (g_spec.spec == 'b' || g_spec.spec == 'B')
		ret = BIN;
	return (ret);
}

void	ft_select_num_sys(va_list format)
{
	long long int s_val;
	unsigned long long int u_val;

	if (ft_check_the_entry(SIGNED_INT, g_spec.spec))
	{
		s_val = pull_signed_int_arg(format);
		ft_int_to_str(s_val);
		//!base(10)
	}
	else if (ft_check_the_entry(UNSIGNED_INT, g_spec.spec))
	{
		u_val = pull_unsigned_int_arg(format);
		//!base(16 || 8 || 2)
	}
}