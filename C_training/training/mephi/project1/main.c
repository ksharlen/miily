/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 00:29:56 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/18 10:18:21 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int					main(void)
{
	t_matrix 		elem;

	ft_get_int(&elem.num_list); //?Значение всегда будет правильным
	ft_malloc(&elem);
	ft_input_data(&elem);
	//printf("elem.num = %d\n", elem.num_list);
	return (0);
}