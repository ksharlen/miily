/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:54:33 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/27 20:07:31 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void        ft_work_aw(void)
{
    if (g_spec.width > g_spec.size_num && g_spec.accuracy > g_spec.size_num)
    {
        if (g_spec.width > g_spec.accuracy)
        {
            g_spec.width -= g_spec.accuracy;
            g_spec.accuracy -= g_spec.size_num;
        }
        else
        {
            g_spec.accuracy -= g_spec.size_num;
            g_spec.width = 0;
        }
    }
    else if (g_spec.accuracy > g_spec.size_num && g_spec.width <= g_spec.size_num)
    {
        g_spec.accuracy -= g_spec.size_num;
        g_spec.width = 0;
    }
    else if (g_spec.width > g_spec.size_num && g_spec.accuracy <= g_spec.size_num)
    {
        g_spec.width -= g_spec.size_num;
        g_spec.accuracy = 0;
    }
}

void        ft_push_str_aw(int num1, int num2, char *buf)
{
    int size_num1;
    int size_num2;

    size_num2 = g_spec.width - g_spec.size_num;
    size_num1 = g_spec.accuracy - g_spec.width;
    if (size_num2 <= 0)
        if (size_num1 > g_spec.size_num)
            ;

    //ft_memset(buf, num1, )
}

void        ft_str_to_str(char *buf, char *inbuf)
{
    if (g_spec.spec == 'c' || g_spec.spec == 'C')
        g_spec.size_num = 1;
    else
        g_spec.size_num = ft_strlen(inbuf);
    ft_work_aw();
    printf("acc = %d\n", g_spec.accuracy);
    printf("width = %d\n", g_spec.width);
    printf("g_spec.size_num = %d\n", g_spec.size_num);
    exit(0);
    // if (g_spec.spec == 'c' || g_spec.spec == 'C')
    //     buf[g_spec.size_write++] = *inbuf;
    // else
    // {
    //     ft_strcat(buf, inbuf);
    //     g_spec.size_write += ft_strlen(inbuf);
    // }
    // if (g_spec.flags & DASH)
    // {
        
    // }
    // else
    // {
    //     if ()
    // }
}