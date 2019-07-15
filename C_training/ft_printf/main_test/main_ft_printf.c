/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/07/15 12:36:59 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "ft_printf.h"
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <wchar.h>
#include <float.h>

int		main(void)
{
	// test_s();
	// test_o();
	// test_x();
	// test_d();
	// test_f();
	// test_other();

	// int ret_ft;
	// int ret;

	// ft_printf("|%.f|\n", 134.50);
	// printf("|%.f|\n", 0.0);
	// printf("|%.0e|\n", 0.0000000000000099);
	// ret_ft = ft_printf("%6.10d\n", 1234);
	// ret = printf("%6.10d\n", 1234);
	// printf("ret_ft = %d\nret = %d\n", ret_ft, ret);
	// ft_printf("time: \n%k\n%k\n%s", 199203010325, 9506012200, "hello world\n");

	ft_printf("%e\n", 0.0);
	printf("%e\n", 0.0);

	return (0);
}
