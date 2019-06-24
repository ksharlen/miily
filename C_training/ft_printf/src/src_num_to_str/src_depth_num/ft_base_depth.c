/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_depth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:28:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 09:41:15 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t					ft_base_depth(unsigned long long int num, int base)
{
	size_t				depth;
	unsigned long long	num_cp;

	num_cp = num;
	depth = 1;
	//Считаем size_num;
	while (num_cp /= base)
		++depth;
	//depth будет равен 0 или 1 в зависимости от точки и точности
	depth = g_spec.flags & DOT && g_spec.accuracy > depth ? g_spec.accuracy : depth;
	//printf("depth = %ld\n", depth);
	//Если есть # или указан p ии num не ноль, тогда size_num будет равен 2 или 1-цы в зависимости от СС
	//Где СС 2 и 1 это вставка с использованием #
	if ((g_spec.flags & HASH || g_spec.spec == 'p') && num)
		depth += (base == 16 ? 2 : 1);
	//дальше если есть флаг 0 ии нету точки ии нету - и ширина больше deth
	depth = g_spec.flags & ZERO && !(g_spec.flags & DOT) && !(g_spec.flags & DASH) &&\
	g_spec.width > depth ? g_spec.width : depth;
	//Размер равен если есть точка и нету точности ии num ноль
	depth = g_spec.flags & DOT && !g_spec.accuracy && !num ? 0 : depth;
	//Есть хеш ии система 8 ии 0 ии флаг точка есть;
	g_spec.flags & HASH && base == 8 && !num && g_spec.flags & DOT ? ++depth : 0;
	printf("deth = %ld\n", depth);
	return (g_spec.size_num = depth);
}
