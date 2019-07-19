/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invisible_sym.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:10:48 by cormund           #+#    #+#             */
/*   Updated: 2019/07/18 17:12:33 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		before_11(char sym)
{
	if (sym == 0)
		work_buf("nul", 3);
	else if (sym == 1)
		work_buf("soh", 3);
	else if (sym == 2)
		work_buf("stx", 3);
	else if (sym == 3)
		work_buf("etx", 3);
	else if (sym == 4)
		work_buf("eot", 3);
	else if (sym == 5)
		work_buf("enq", 3);
	else if (sym == 6)
		work_buf("ack", 3);
	else if (sym == 7)
		work_buf("bel", 3);
	else if (sym == 8)
		work_buf("bs", 2);
	else if (sym == 9)
		work_buf("ht", 2);
	else if (sym == 10)
		work_buf("nl", 2);
	else if (sym == 11)
		work_buf("vt", 2);
}

static void		before_23(char sym)
{
	if (sym == 12)
		work_buf("np", 2);
	else if (sym == 13)
		work_buf("cr", 2);
	else if (sym == 14)
		work_buf("so", 2);
	else if (sym == 15)
		work_buf("si", 2);
	else if (sym == 16)
		work_buf("dle", 3);
	else if (sym == 17)
		work_buf("dc1", 3);
	else if (sym == 18)
		work_buf("dc2", 3);
	else if (sym == 19)
		work_buf("dc3", 3);
	else if (sym == 20)
		work_buf("dc4", 2);
	else if (sym == 21)
		work_buf("nak", 2);
	else if (sym == 22)
		work_buf("syn", 3);
	else if (sym == 23)
		work_buf("etb", 3);
}

static void		before_32(char sym)
{
	if (sym == 24)
		work_buf("can", 3);
	else if (sym == 25)
		work_buf("em", 2);
	else if (sym == 26)
		work_buf("sub", 3);
	else if (sym == 27)
		work_buf("esc", 3);
	else if (sym == 28)
		work_buf("fs", 2);
	else if (sym == 29)
		work_buf("gs", 2);
	else if (sym == 30)
		work_buf("rs", 2);
	else if (sym == 31)
		work_buf("us", 2);
	else if (sym == 32)
		work_buf("sp", 2);
}

void			invisible_sym(va_list format)
{
	char		sym;

	sym = va_arg(format, int);
	if (sym > -1 && sym < 12)
		before_11(sym);
	else if (sym > 11 && sym < 24)
		before_23(sym);
	else if (sym > 23 && sym < 33)
		before_32(sym);
	else
		work_buf(&sym, 1);
}
