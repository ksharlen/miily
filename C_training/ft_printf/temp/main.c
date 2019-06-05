/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/05 14:58:08 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>

void	ft_error(char *param, int a)
{
	printf("%s %d", param, a);
}

int		ft_size_num(const char *format)
{
	int		ret;

	ret = 0;
	while (ft_isdigit(*format++))
		++ret;
	return (ret);
}

int		main(void)
{
	int a;

	a = ft_size_num("0123asdf");
	printf("a = %d\n", a);
	return (0);
}
