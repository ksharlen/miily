/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 16:48:26 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 16:56:54 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

char	ft_def(char str)
{
	if (str == '+')
		return ('+');
	else if (str == '-')
		return ('-');
	else if (str == '/')
		return ('/');
	else if (str == '*')
		return ('*');
	else if (str == '%')
		return ('%');
	return ('0');
}
