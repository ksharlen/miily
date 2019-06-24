/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:47:04 by marvin            #+#    #+#             */
/*   Updated: 2019/06/24 21:04:52 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int						ft_check_com(void)
{
	char 						*str;

	printf("testing input\n");
	str = g_spec.size_type;
	printf("spec.spec = %c\n", g_spec.spec);
	if (ft_memchr(TYPE, g_spec.spec, ft_strlen(TYPE)))
	{
		if (((!ft_strcmp("ll", str) || !ft_strcmp("l", str)) &&
			ft_memchr(SUPPORT_INT, g_spec.spec, ft_strlen(SUPPORT_INT))))
		{
			printf("1\n");
			return (1);
		}
		else if (((!ft_strcmp("h", str) || !ft_strcmp("hh", str)))
			&& ft_memchr(SUPPORT_INT, g_spec.spec, ft_strlen(SUPPORT_INT)))
		{
			printf("2\n");
			return (1);
		}
		else if (((!ft_strcmp("j", str) || !ft_strcmp("z", str))) &&
			ft_memchr(SUPPORT_INT, g_spec.spec, ft_strlen(SUPPORT_INT)))
		{
			printf("3\n");
			return (1);
		}
		else if (((!ft_strcmp("l", str)) || (!ft_strcmp("L", str))) &&
			ft_memchr(SUPPORT_FLOAT, g_spec.spec, ft_strlen(SUPPORT_FLOAT)))
		{
			printf("4\n");
			return (1);
		}
		g_spec.size_type = NULL;
	}
	printf("0\n");
	return (0);
}

static long long int			ft_signed_format(va_list format)
{
	long long int				ret;

	ret = 0;
	if (!g_spec.size_type)
		ret = va_arg(format, int);
	else
	{
		if (!(ft_memcmp(g_spec.size_type, "l", 1)))
			ret = va_arg(format, long int);
		else if (!(ft_strcmp(g_spec.size_type, "ll")))
			ret = va_arg(format, long long int);
		else if (!(ft_strcmp(g_spec.size_type, "h")))
			ret = (short)va_arg(format, int);
		else if (!(ft_strcmp(g_spec.size_type, "hh")))
			ret = (char)va_arg(format, int);
		else if (!(ft_strcmp(g_spec.size_type, "j")))
			ret = va_arg(format, intmax_t);
		else if (!(ft_strcmp(g_spec.size_type, "z")))
			ret = va_arg(format, ssize_t);
	}
	return (ret);
}

static unsigned long long int	ft_unsigned_format(va_list format)
{
	unsigned long long int		ret;

	ret = 0;
	if (!g_spec.size_type)
		ret = va_arg(format, unsigned int);
	else
	{
		if (!(ft_strcmp(g_spec.size_type, "l")))
			ret = va_arg(format, unsigned long int);
		else if (!(ft_strcmp(g_spec.size_type, "ll")))
			ret = va_arg(format, unsigned long long int);
		else if (!(ft_strcmp(g_spec.size_type, "h")))
			ret = (unsigned short)va_arg(format, unsigned int);
		else if (!(ft_strcmp(g_spec.size_type, "hh")))
			ret = (unsigned char)va_arg(format, unsigned int);
		else if (!(ft_strcmp(g_spec.size_type, "j")))
			ret = va_arg(format, uintmax_t);
		else if (!(ft_strcmp(g_spec.size_type, "z")))
			ret = va_arg(format, size_t);
		//?Подумать какой тип применить к р
		else if (g_spec.spec == 'p')
			ret = va_arg(format, uintptr_t);
	}
	return (ret);
}

//?Проверка на сейв
static int						ft_define_num_sys(void)
{
	int 						ret;

	if (g_spec.spec == 'x' || g_spec.spec == 'X' || g_spec.spec == 'p')
		ret = HEX;
	else if (g_spec.spec == 'o' || g_spec.spec == 'O')
		ret = OCT;
	else if (g_spec.spec == 'b' || g_spec.spec == 'B')
		ret = BIN;
	return (ret);
}

void							ft_control_var(char *buf_printf, va_list format)
{
	char 						*test_str;
	long long int 				ret_s;
	unsigned long long			ret_u;
	int							ret_check_com;

	ret_check_com = ft_check_com();
	if (ft_memchr(NUM_INT, g_spec.spec, 1) && ret_check_com)
	{
		if (ft_memchr(SIGNED_INT, g_spec.spec, 1))
		{
			ret_s = ft_signed_format(format);
			test_str = ft_int_to_str(ret_s);
			test_str = ft_control_fwa(test_str);
			ft_strcat(buf_printf, test_str);
			g_spec.size_write += g_spec.size_spec;
		}
		else if (ft_strchr(UNSIGNED_INT, g_spec.spec))
		{
			ret_u = ft_unsigned_format(format);
			test_str = ft_base_to_str(ret_u, ft_define_num_sys());
			ft_strcat(buf_printf, test_str);
			g_spec.size_write += g_spec.size_num;
		}
	}
	else if (ft_memchr(NUM_DOUBLE, g_spec.spec, 1) && ret_check_com)
		printf("double\n");
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