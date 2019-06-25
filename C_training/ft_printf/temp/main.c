/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:55:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/25 17:10:13 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define ZERO				1	/*HH */
# define PLUS				2	/*H */
# define DASH				4	/*L */
# define SPACE				8	/*LL */
# define HASH				16	/*J */
# define DOT 				32	/*Z */
# define DEC				64
# define FLAGS				"#$'*+-.:;_"
# define SIZE_MOD			"zjlh"
# define UNDEF_BEH			"!\"&()/\\<=>?@[]^_`{}|~"
# define TYPE 				"dioOxXufeEgGaAnprkUD"
# define FOR_MOD			""

#include "libft.h"

static int		ft_ismy(char form)
{

	if (((form >= 0 && form < 35) || form == 37 || form == '%' ||
	form == '$' || form == '&' || form == 40 || form == 41 ||
	form == ',' || form == '/' || (form > 59 && form < 76) ||
	(form > 76 && form < 95) ||	(form > 95 && form < 104) ||
	(form > 104 && form < 106) || (form > 106 && form < 108) ||
	(form > 108 && form < 116) || (form > 116 && form < 122) || form > 122))
	{
//		printf("test\n");
		return (1);
	}
	return (0);
}

static int		ft_true(char form)
{
	if (form >= 0 && form < 35)
		return (1);
	return (0);
}

static int		ft_test(char *form)
{
	int sum;

	sum = 0;
	while (!ft_ismy(*form) && *form)
	{
		//printf("test\n");
		++sum;
		++form;
	}

	return (sum);
}

int		main(void)
{
	char *str = "%2$.zjlh#'*+-.:;_ll2hh0dhow are yoU?";
	int sum;

	sum = ft_test(str);
	printf("sum = %d\n", sum);
	printf(str, 45);
	return (0);
}