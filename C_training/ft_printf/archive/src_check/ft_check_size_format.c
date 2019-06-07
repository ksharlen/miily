/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_size_format.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:57:20 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/06 09:11:14 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_size_format(char symbal_irr)
{
	if (ft_strchr(DOES_NOT_SUPPORT_LONG, symbal_irr))
		return (1);
	else
		return (0);
}