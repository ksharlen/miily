/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 09:28:41 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/16 16:06:43 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char s[] = "		hello world   ";
	char *p_str;

	printf("before: %s\n", s);
	p_str = ft_strtrim(s);
	return (0);
}
