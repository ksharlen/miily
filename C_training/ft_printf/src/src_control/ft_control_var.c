/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:47:04 by marvin            #+#    #+#             */
/*   Updated: 2019/06/30 11:43:06 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int					*pull_n_arg(va_list format)
{
	int						*ret;

	ret = va_arg(format, int *);

	return (ret);
}

static char					*pull_string_arg(va_list format)
{
	char					*ret_str;
	char					ret;

	ret_str = NULL;
	if (g_spec.spec == 's' || g_spec.spec == 'S')
		ret_str = va_arg(format, char *);
	else if (g_spec.spec == 'c' || g_spec.spec == 'C')
	{
		ret = (char)va_arg(format, int);
		ret_str = &ret;
	}
	return (ret_str);
}

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

static long double			pull_double_arg(va_list format)
{
	long double				ret;

	ret = 0.0;
	if (g_spec.mod == DASH)
		ret = va_arg(format, long double);
	else
		ret = va_arg(format, long double);
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
//?Проверка на сейв

void						ft_control_var(va_list format)
{
	char 					*test_str;
	long long int 			ret_s;
	unsigned long long		ret_u;
	int						ret_check_com;

	if (g_spec.spec == 'n')
	{
		int *n;

		n = pull_n_arg(format);
		*n = g_spec.ret_printf + g_spec.size_write;
	}
	if (ft_check_the_entry(NUM_INT, g_spec.spec))
	{
		if (ft_check_the_entry(SIGNED_INT, g_spec.spec))
		{
			ret_s = pull_signed_int_arg(format);
			test_str = ft_int_to_str(ret_s);
			ft_work_buf(test_str, g_spec.size_num);
			//ft_strcat(buf_printf, test_str);
			g_spec.size_write += g_spec.size_num;
		}
		else if (ft_check_the_entry(UNSIGNED_INT, g_spec.spec))
		{
			ret_u = pull_signed_int_arg(format);
			g_spec.size_write += g_spec.size_num;
		}
	}
	else if (ft_check_the_entry(NUM_DOUBLE, g_spec.spec))
	{

	}
	else if (g_spec.spec == 'c')
		ft_char_to_str(pull_string_arg(format));
	else if (ft_check_the_entry(NUM_STRING, g_spec.spec))
	{
		ft_str_to_str(pull_string_arg(format));
	}
	else if (ft_check_the_entry(NUM_OTHER, g_spec.spec))
	{
		
	}
	else
		;
	//printf("double\n");
	// else if (ft_strchr(NUM_DOUBLE, g_spec.spec))
	// {
	// 	//?Заходим в ф-ию определения длинны вещественных чисел
	// 	//?Или определяем полную точность формата
	// }
	// else if (ft_strchr(NUM_OTHER, g_spec.spec))
	// {
	// 	//?Тут еще подумаю
	// }
}