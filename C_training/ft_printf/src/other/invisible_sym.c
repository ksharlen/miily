/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invisible_sym.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:17:38 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:19 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void    before_11(char sym)
{
    if (sym == 0)
        ft_work_buf("nul", 3);
    else if (sym == 1)
        ft_work_buf("soh", 3);
    else if (sym == 2)
        ft_work_buf("stx", 3);
    else if (sym == 3)
        ft_work_buf("etx", 3);
    else if (sym == 4)
        ft_work_buf("eot", 3);
    else if (sym == 5)
        ft_work_buf("enq", 3);
    else if (sym == 6)
        ft_work_buf("ack", 3);
    else if (sym == 7)
        ft_work_buf("bel", 3);
    else if (sym == 8)
        ft_work_buf("bs", 2);
    else if (sym == 9)
        ft_work_buf("ht", 2);
    else if (sym == 10)
        ft_work_buf("nl", 2);
    else if (sym == 11)
        ft_work_buf("vt", 2);
}

static void     before_23(char sym)
{
    if (sym == 12)
        ft_work_buf("np", 2);
    else if (sym == 13)
        ft_work_buf("cr", 2);
    else if (sym == 14)
        ft_work_buf("so", 2);
    else if (sym == 15)
        ft_work_buf("si", 2);
    else if (sym == 16)
        ft_work_buf("dle", 3);
    else if (sym == 17)
        ft_work_buf("dc1", 3);
    else if (sym == 18)
        ft_work_buf("dc2", 3);
    else if (sym == 19)
        ft_work_buf("dc3", 3);
    else if (sym == 20)
        ft_work_buf("dc4", 2);
    else if (sym == 21)
        ft_work_buf("nak", 2);
    else if (sym == 22)
        ft_work_buf("syn", 3);
    else if (sym == 23)
        ft_work_buf("etb", 3);
}

static void     before_32(char sym)
{
    if (sym == 24)
        ft_work_buf("can", 3);
    else if (sym == 25)
        ft_work_buf("em", 2);
    else if (sym == 26)
        ft_work_buf("sub", 3);
    else if (sym == 27)
        ft_work_buf("esc", 3);
    else if (sym == 28)
        ft_work_buf("fs", 2);
    else if (sym == 29)
        ft_work_buf("gs", 2);
    else if (sym == 30)
        ft_work_buf("rs", 2);
    else if (sym == 31)
        ft_work_buf("us", 2);
    else if (sym == 32)
        ft_work_buf("sp", 2);
}

void            invisible_sym(va_list format)
{
    char        sym;

    sym = va_arg(format, int);
    if (sym > -1 && sym < 12)
        before_11(sym);
    else if (sym > 11 && sym < 24)
        before_23(sym);
    else if (sym > 23 && sym < 33)
        before_32(sym);
    else
        ft_work_buf(&sym, 1);
}