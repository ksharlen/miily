/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:24:21 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 13:57:17 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p_alloc;

	p_alloc = NULL;
	p_alloc = malloc(size);
	if (p_alloc == NULL)
		return (NULL);
	ft_bzero(p_alloc, size);
	return (p_alloc);
}
