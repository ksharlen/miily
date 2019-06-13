/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:25:50 by cormund           #+#    #+#             */
/*   Updated: 2019/06/13 16:27:50 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

t_spec g_spec;

int	main(int ac, char **av)
{
	long long int	num;
	char *p = "a";
	// intptr_t *ptr = "a";

	g_spec.spec = 'X';
	num = 0;
	printf("%s\n", ft_int_to_str(num));
	// printf("%hhX", num);
	/*printf("%d\n", ptr);
	printf("%i\n", p);
	printf("%#x\n", ptr);
	printf("%p\n", ptr);
	printf("%#X", -2);*/
	return (0);
}