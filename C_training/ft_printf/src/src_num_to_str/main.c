/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:25:50 by cormund           #+#    #+#             */
/*   Updated: 2019/06/18 18:36:56 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

t_spec g_spec;

void				ft_print_p(int num, ...)
{
	va_list			vaptr;
	intptr_t		p;

	va_start(vaptr, num);
	while (num--)
	{
		p = va_arg(vaptr, intptr_t);
		printf("p = %s\n", ft_base_to_str(p, 16));
	}
}

int					main(int ac, char **av)
{
	char			*format;
	long long int	num;
	char 			*p1 = "a";
	char			*p0 = "b";
	// intptr_t *ptr = "a";


	// ?test 1
	// g_spec.spec = 'p';
	// g_spec.flags |= HASH;
	// // printf("p = %s\n", ft_base_to_str(p1, 16));
	// printf("%p \n", p1);
	// printf("%.0p \n\n", p0);
	// ft_print_p(2, p1, p0);


	// !test 2
	// g_spec.flags |= DOT;
	// g_spec.accuracy = 0;
	// num = 1111;
	// printf("%s\n", ft_int_to_str(num));
	// printf("%d\n", num);
	// printf("%hhX", num);
	// printf("%d\n", ptr);
	// printf("%i\n", p);
	// printf("%#X\n", 1000);
	// printf("%p\n", ptr);
	// printf("%#X", -2);

	//?test 3
	g_spec.spec = 'x';
	g_spec.flags |= HASH;
	// g_spec.flags |= DOT;
	g_spec.accuracy = 0;
	num = 0;

	printf("x = %s\n", ft_base_to_str(num, 16));
	printf("    %#0x\n", num);

	// printf("o = %s\n", ft_base_to_str(num, 8));
	// printf("    %#o   t\n", num);
	return (0);
}
