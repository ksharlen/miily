/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:25:50 by cormund           #+#    #+#             */
/*   Updated: 2019/06/13 15:22:43 by cormund          ###   ########.fr       */
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
	num = -1;
	printf("%s\n", ft_base_to_str(num, 16));
	printf("%hhX", num);
	/*printf("%d\n", ptr);
	printf("%i\n", p);
	printf("%#x\n", ptr);
	printf("%p\n", ptr);
	printf("%#X", -2);*/
	return (0);
}