/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:28:57 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/28 18:41:18 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_the_entry(const char *def_str, const int sym)
{
	if (ft_memchr(def_str, sym, ft_strlen(def_str)))
		return (1);
	else
		return (0);
}

int		ft_str_size_num(const char *format)
{
	int		ret;

	ret = 0;
	while (ft_isdigit(*format++))
		++ret;
	return (ret);
}

int		ft_ismy(char form)
{

	if (((form >= 0 && form < 32) || (form > 32 && form < 35) ||
	form == 37 || form == '%' || form == '$' || form == '&' ||
	form == 40 || form == 41 || form == ',' || form == '/' ||
	(form > 59 && form < 76) ||	(form > 76 && form < 95) ||
	(form > 95 && form < 104) || (form > 104 && form < 106) ||
	(form > 106 && form < 108) || (form > 108 && form < 116) ||
	(form > 116 && form < 122) || form > 122))
	{
		return (1);
	}
	return (0);
}

void	ft_print_test(const char *form)
{
	char *type = NULL;

	if (form)
		printf("string:	\"%s\"\n", form);
	printf("spec 	=	%c		accuracy =	%d		width		=	%d	size_num	=	%ld\n", g_spec.spec, g_spec.accuracy, g_spec.width, g_spec.size_num);
	printf("ZERO 	=	%d		PLUS =		%d		DASH		=	%d\n", (g_spec.flags & ZERO) && 1, (g_spec.flags & PLUS) && 1, (g_spec.flags & DASH) && 1);
	printf("SPACE 	=	%d		HASH =		%d		DOT		=	%d\n", g_spec.flags & SPACE && 1, g_spec.flags & HASH && 1, g_spec.flags & DOT && 1);
	printf("DEC 	=	%d		STAR_ACC =	%d		STAR_WITH	=	%d\n", g_spec.flags & DEC && 1, g_spec.flags & STAR_ACC && 1, g_spec.flags & STAR_WITH && 1);

	if (g_spec.mod & ZERO)
		type = "hh";
	else if (g_spec.mod & PLUS)
		type = "h";
	else if (g_spec.mod & DASH && ft_check_the_entry(NUM_DOUBLE, g_spec.spec))
		type = "L";
	else if (g_spec.mod & DASH)
		type = "l";
	else if (g_spec.mod & SPACE)
		type = "ll";
	else if (g_spec.mod & HASH)
		type = "j";
	else if (g_spec.mod & DOT)
		type = "z";
	else if (g_spec.mod & DEC)
		type = "t";
	printf("type 	=	%s\n", type);
	printf("=============================\n");
}
