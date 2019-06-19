/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:12:39 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/19 09:50:50 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void		*ft_malloc(size_t size)
{
	void 	*ret;
	ret = NULL;

	ret = malloc(size);
	if (!ret)
		ft_error(ERR_MEM);
	return (ret);
}