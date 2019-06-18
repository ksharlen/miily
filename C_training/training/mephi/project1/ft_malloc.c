/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:12:39 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/18 10:14:06 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_malloc(t_matrix *elem)
{
	elem->elem = (t_line *)malloc(sizeof(t_line) * elem->num_list);
	if (!elem->elem)
		ft_error(ERR_MEM);
}