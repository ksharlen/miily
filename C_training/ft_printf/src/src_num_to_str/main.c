/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:25:50 by cormund           #+#    #+#             */
/*   Updated: 2019/06/18 15:59:18 by cormund          ###   ########.fr       */
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

	g_spec.spec = 'o';
	g_spec.flags |= HASH;

	// ?test 1
	//printf("p = %s\n", ft_base_to_str(p1, 16));
	// printf("%p \n", p1);
	// printf("%p \n\n", p0);
	// ft_print_p(2, p1, p0);
	g_spec.accuracy = 0;
	// num = -9223372036854775808;
//	printf("%s\n", ft_int_to_str(num));
	// printf("%hhX", num);
	// printf("%d\n", ptr);
	// printf("%i\n", p);
	// printf("%#X\n", 1000);
	// printf("%p\n", ptr);
	// printf("%#X", -2);

	//!test 2

	// num = 0;
	
	// printf("x = %s\n", ft_base_to_str(num, 16));
	// printf("    %#llx\n\n", num);

	printf("o = %s\n", ft_base_to_str(num, 8));
	printf("    %.0llo   t\n\n", num);
	return (0);
}
