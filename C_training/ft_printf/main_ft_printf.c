/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:45 by marvin            #+#    #+#             */
/*   Updated: 2019/07/06 13:28:35 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "ft_printf.h"
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include <wchar.h>

int		main(void)
{
	// test_s();
	// test_o();
	// test_x();
	// test_d();
	//test_other();

	int ret_ft;
	int ret;

	ret_ft = ft_printf("%6.10d\n", 1234);
	ret = printf("%6.10d\n", 1234);
	printf("ret_ft = %d\nret = %d\n", ret_ft, ret);
	return (0);
}
