/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:27:06 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/24 09:22:51 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project2.h"

int		main(void)
{
	char 	line[SIZE_WORD];
	int		ret_scanf;

	ft_bzero(line, SIZE_WORD);
	scanf("%19000s", line);
	printf("line = %s\n", line);
	return (0);
}