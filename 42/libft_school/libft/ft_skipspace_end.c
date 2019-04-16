/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipspace_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 10:46:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/16 11:21:13 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_skipspace_end(char *str)
{
	size_t len;

	len = ft_strlen(str);
	printf("ft_strlen = %lu\n", len);
	while (ft_isspace(str[len - 1]))
		--len;
	str[len] = '\0';
}
