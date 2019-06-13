/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:47:04 by marvin            #+#    #+#             */
/*   Updated: 2019/06/13 09:23:12 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long int			ft_signed_format(va_list format)
{
	long long int		ret;

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
	else if ((!g_spec.size_type))
		ret = va_arg(format, unsigned int);
	return (ret);
}

//?Проверка на сейв
// static int	ft_define_num_sys(void)
// {
// 	int 	ret;

// 	if (g_spec.mod == 'x' || g_spec.mod == 'X')
// 		ret = HEX;
// 	else if (g_spec.mod == 'o' || g_spec.mod == 'O')
// 		ret = OCT;
// 	else if (g_spec.mod == 'b' || g_spec.mod == 'B')
// 		ret = BIN;
// 	else if (g_spec.mod == 'd' || g_spec.mod == 'i')
// 		ret = DECIMAL;
// 	return (ret);
// }

void				ft_control_var(char *buf_printf, va_list format)
{
	char 			*test_str;
	long long int 	ret;

	ret = 0;
	if (ft_strchr(NUM_INT, g_spec.spec))
	{
		//printf("g_spec.mod = %c\n", g_spec.mod);
		//printf("g_spec.size_type = %s\n", g_spec.size_type);
		if (ft_strchr(SIGNED_INT, g_spec.spec))
		{
			//printf("1\n");
			ret = ft_signed_format(format);
			test_str = ft_int_to_str(ret);
			ft_strcat(buf_printf, test_str);
			//printf("buf: %s\n", buf_printf);
			//printf("size_buf = %ld\n", ft_strlen(buf_printf));
			printf("size_write = %ld\n", g_spec.size_write);
			g_spec.size_write += g_spec.size_spec;
		}
		//test_str = ft_num2hex_or_oct(ft_num_int(format), ft_define_num_sys());
		//!Тут будет ф-ия работы с шириной, флагами и точностью
		//ft_strcat(buf_printf, test_str);

		//printf("buf_print = %s\n", buf_printf);
		//test_str = NULL;
		// ?Заходим в ф-ию определение длинны целых чисел
		// ?Или определяем полную точность формата
	}
	// else if (ft_strchr(NUM_DOUBLE, g_spec.mod))
	// {
	// 	//?Заходим в ф-ию определения длинны вещественных чисел
	// 	//?Или определяем полную точность формата
	// }
	// else if (ft_strchr(NUM_OTHER, g_spec.mod))
	// {
	// 	//?Тут еще подумаю
	// }
}