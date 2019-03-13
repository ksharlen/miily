/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fun.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:58:29 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 16:57:34 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_atoi(char *str)
{
	int		flag_sign;
	char	*p_str;
	int		sum;

	sum = 0;
	p_str = str;
	flag_sign = 1;
	while ((*p_str < 33) && (*p_str != 0))
		p_str++;
	if ((*p_str == '+') || (*p_str == '-'))
		if (*p_str++ == '-')
			flag_sign = -1;
	if ((*p_str < 48) || (*p_str > 57))
		return (0);
	while (1)
	{
		if ((*p_str > 47) && (*p_str < 58))
		{
			sum = sum * 10 + (*p_str - 48);
			p_str++;
		}
		else
			break ;
	}
	return (sum * flag_sign);
}

/*int		ft_def(char *str)
{
	if (*str == '+')
	if (*str == '-')
	if (*str == '/')
	if (*str == '*')
}*/
