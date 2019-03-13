/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 15:39:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/12 15:43:16 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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
