/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:47:04 by marvin            #+#    #+#             */
/*   Updated: 2019/06/11 08:40:11 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_define_num_sys(void)
{
	int 	ret;

	if (g_spec.mod == 'x' || g_spec.mod == 'X')
		ret = 16;
	else if (g_spec.mod == 'o' || g_spec.mod == 'O')
		ret = 8;
	else if (g_spec.mod == 'b' || g_spec.mod == 'B')

}

void		ft_control_var(char *buf_printf, va_list format, char *type)
{
	char 	*test_str;

	if (ft_strchr(NUM_INT, g_spec.mod))
	{

		//?Заходим в ф-ию определение длинны целых чисел
		//?Или определяем полную точность формата
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