/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 09:09:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/04/15 11:39:12 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_std_header.h"

int		main(void)
{
	char dst[6] = "hello";
	char src[] = "world";
	char dst1[6] = "hello";
	char src1[] = "world";
	int res;

	res = ft_strlcat(dst, src, 2);
	printf("%s\n", dst);
	printf("res = %d\n", res);
	res = strlcat(dst1, src1, 2);
	printf("%s\n", dst1);
	printf("res = %d\n", res);
	return (0);
}
