/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:47:04 by marvin            #+#    #+#             */
/*   Updated: 2019/06/11 14:33:47 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_define_num_sys(void)
{
	int 	ret;

	if (g_spec.mod == 'x' || g_spec.mod == 'X')
		ret = HEX;
	else if (g_spec.mod == 'o' || g_spec.mod == 'O')
		ret = OCT;
	else if (g_spec.mod == 'b' || g_spec.mod == 'B')
		ret = BIN;
	else if (g_spec.mod == 'd' || g_spec.mod == 'i')
		ret = DECIMAL;
	return (ret);
}

void		ft_control_var(char *buf_printf, va_list format, char *type)
{
	char 	*test_str;

	if (ft_strchr(NUM_INT, g_spec.mod))
	{
		test_str = ft_num2hex_or_oct(ft_num_int(format, type), ft_define_num_sys());
		//!Тут будет ф-ия работы с шириной, флагами и точностью
		ft_strcat(buf_printf, test_str);
		g_spec.size_write += g_spec.size_spec;
		
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