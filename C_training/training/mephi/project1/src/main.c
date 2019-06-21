/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 00:29:56 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/21 13:42:58 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int					main(void)
{
	t_matrix 		elem;

	elem.num_list = 0;
	elem.elem = NULL;
	printf("Введите кол-во строк: \n");
	ft_num_line(&elem.num_list);
	elem.elem = (t_line *)ft_malloc(sizeof(t_line) * elem.num_list);
	ft_input_data(&elem);
	ft_print_matrix(elem);
	printf("\n");
	ft_work(&elem);
	ft_free_all(&elem);
	return (0);
}