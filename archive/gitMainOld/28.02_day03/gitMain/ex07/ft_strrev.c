/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 22:44:55 by ksharlen          #+#    #+#             */
/*   Updated: 2019/03/01 23:13:50 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str);
char	*ft_strrev(char *str)
{
	char *str1;
	char *p_str;
	int i;
	i = 0;
	int len;

	p_str = str;
	len = 0;
	while (*str++ != '\0')
		len++;
	while (i <= (len / 2))
	{
		str[i] = *(p_str + len - 1 - i);
		i++;
	}
	

	return (str);
}

int	main(void)
{
	char *str1;
	char *str2;
	int len;

	len = 0;
	str1 = "hello";
	str2 = ft_strrev(str1);
	printf("%s\n", str2);
	return (0);
}
