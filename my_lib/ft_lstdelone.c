/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 09:20:32 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/19 09:36:11 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	if (alst)
	{
		temp = (*alst);
		(*alst) = (*alst)->next;
		(*del)((temp)->content, (temp)->content_size);
		ft_memdel((void *)&temp);
	}
}
