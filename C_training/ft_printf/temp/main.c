/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:43:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/07 14:41:54 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>
#include <wchar.h>
#include <unistd.h>
#define MOD_NUM(a) (((a) < 0) ? -(a) : (a))

int		main(void)
{
	int a = 5;
	int b = -5;

	MOD_NUM(a);
	b = MOD_NUM(b);
	printf("a = %d b = %d\n", a, b);
	return (0);
}
