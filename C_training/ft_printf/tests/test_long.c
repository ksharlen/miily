/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 09:38:30 by cormund           #+#    #+#             */
/*   Updated: 2019/07/12 09:42:50 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    test_f()
{
    //LDBL_MAX
    printf("------------test1-------------\n");
	ft_printf("|%.f|\n", 998.99);
	printf("|%.f|\n", 998.99);
    printf("------------test2-------------\n");
    ft_printf("|%+f|\n", 1.1);
	printf("|%+f|\n", 1.1);
    printf("------------test3-------------\n");
    ft_printf("|%f|\n", 1.0);
	printf("|%f|\n", 1.0);
    printf("------------test4-------------\n");
	ft_printf("|%.0f|\n", 1.10);
    printf("|%.0f|\n", 1.10);
    printf("------------test5-------------\n");
	ft_printf("|%.20f|\n", 0.144444544444444445);
    printf("|%.20f|\n", 0.144444544444444445);
    printf("------------test6-------------\n");
	ft_printf("|%.20f|\n", 0.1);
    printf("|%.20f|\n", 0.1);
}