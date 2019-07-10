/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/07/10 10:40:59 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "ft_printf.h"
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <wchar.h>

int		main(void)
{
	test_s();
	test_o();
	test_x();
	test_d();
	test_other();

	int ret_ft;
	int ret;

	ft_printf("%f/n", 0.275);
	// printf("|%+f|\n", 1.1);
	// printf("|%f|\n", 1.0);
	// printf("|%.0f|\n", 1.10);
	// printf("|%.20f|\n", 0.144444544444444445);
	// printf("|%.20f|\n", 0.1);
	// ret_ft = ft_printf("%6.10d\n", 1234);
	// ret = printf("%6.10d\n", 1234);
	// printf("ret_ft = %d\nret = %d\n", ret_ft, ret);
	return (0);
}
