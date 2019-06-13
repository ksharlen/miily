/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_fwa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 08:37:47 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/13 14:20:15 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char            *ft_width(const char *str)
{
	size_t 		size;

	if (g_spec.width > g_spec.accuracy && g_spec.width > g_spec.size_num)
	{
		g_spec.width -= g_spec.size_num;
		g_spec.accuracy = 0;
	}
	else if (g_spec.accuracy >= g_spec.width && g_spec.accuracy > g_spec.size_num)
	{
		g_spec.width = 0;
		g_spec.accuracy -= g_spec.size_num;
	}
	else
	{
		g_spec.accuracy = 0;
		g_spec.width = 0;
	}
	size = g_spec.width + g_spec.accuracy;
	//! if (g_spec.width > g_spec.size_num && g_spec.accuracy > g_spec.size_num)
	// {
	// 	if (g_spec.width > g_spec.accuracy)
	// 	{
	// 		g_spec.accuracy -= g_spec.size_num;
	// 		g_spec.width -= g_spec.accuracy;
	// 	}
	// 	else if (g_spec.width <= g_spec.accuracy)
	// 	{
	// 		g_spec.width = 0;
	// 		g_spec.accuracy -= g_spec.size_num;
	// 	}
	// }
	// else if (g_spec.width <= g_spec.size_num && g_spec.accuracy > g_spec.size_num)
	// {
	// 	g_spec.width = 0;
	// 	g_spec.accuracy -= g_spec.size_num;
	// }
	// else if (g_spec.width > g_spec.size_num && g_spec.accuracy <= g_spec.size_num)
	// {
	// 	g_spec.width -= g_spec.size_num;
	// 	g_spec.accuracy = 0;
	// }
	// else
	// {
	// 	g_spec.width = 0;
	// 	g_spec.accuracy = 0;
	//! }
    // char        *ret;
    // size_t      size;
    // size_t      accuracy;
    // size_t      width;

    // //ret = (char *)str;
    // //size =
    // //ret = ft_strnew(size);
    // accuracy = 0;
    // width = 0;
    // //printf("g_spec.size_num = %ld\n", g_spec.size_num);
    // size = g_spec.size_num;
    // if (g_spec.width > g_spec.size_num && g_spec.accuracy > g_spec.size_num)
    // {
    //     if (g_spec.width <= g_spec.accuracy)
    //     {
    //         size = g_spec.accuracy;
    //         accuracy = g_spec.accuracy - g_spec.size_num;
    //     }
    //     else if (g_spec.width > g_spec.accuracy)
    //     {
    //         size = g_spec.width;
    //         accuracy = g_spec.accuracy - g_spec.size_num;
    //         width = g_spec.width - g_spec.accuracy;
    //         //printf("width = %ld\naccuracy = %ld\n", width, accuracy);
    //         //printf("size = %ld\n", size);
    //     }
    // }
    // else if (g_spec.width < g_spec.accuracy)
    // {
    //     g_spec.
    // }
    // ret = ft_strnew(size);
    // ft_memset(ret, ' ', width);
    // ft_memset(ret + width, '0', accuracy);
    // //printf("ft_Strlen = %ld\n", ft_strlen(ret));
    // ft_memcpy(ret + width + accuracy, str, g_spec.size_num);
    // g_spec.size_write += g_spec.width;
    // //printf("ret = %s\n", ret);
    // //printf("ret = %s\n", ret);
    // //ft_strcat(ret, str);
    // //ft_memcpy(ret + (width + accuracy), str, ft_strlen(str));
    // //printf("str = %s\n", str);
    // // if (g_spec.width > g_spec.size_num)
    // // {
    // //     if (g_spec.width && (!((g_spec.flags & ZERO) == ZERO)))
    // //     {
    // //         ret = (char *)ft_strnew(g_spec.size_num + (g_spec.width - g_spec.size_num));
    // //         ft_memset(ret, ' ', g_spec.width - g_spec.size_num);
    // //         ft_strcat(ret, str);
    // //         g_spec.size_write += g_spec.width;
    // //     }
    // // }
    // return (ret);
}

char            *ft_flags_hash(const char *str)
{
    char *ret;

    return (ret);
}

// char            *ft_flag_plus_space(const char *str)
// {
//     char *ret;

//     if (g_spec.flags & PLUS == PLUS)
//     {
//     }
//     else if (g_spec.flags & SPACE == SPACE)
// }

char            *ft_flag_dash_zero(const char *str)
{
    char *ret;

    return (ret);
}


char            *ft_accuracy(const char *str)
{
    char *ret;

    return (ret);
}
