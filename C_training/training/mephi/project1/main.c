/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 00:29:56 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/19 10:20:14 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int					main(void)
{
	t_matrix 		elem;

	printf("Введите кол-во строк: \n");
	ft_num_line(&elem.num_list);
	elem.elem = (t_line *)ft_malloc(sizeof(t_line) * elem.num_list);
	ft_input_data(&elem);
	ft_print_matrix(elem);
	//ft_input_data(&elem);
	//printf("elem.num = %d\n", elem.num_list);
	return (0);
}