/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/11 07:42:26 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>
#include <wchar.h>
#include <unistd.h>
#define MOD_NUM(a) (a = (((a) < 0) ? -(a) : (a)))

typedef vector<int> lnum;

int		main(void)
{
	printf( "%.2020f\n", 3.005);
  	printf( "%.2f\n", 33.005);
	return (0);
}
