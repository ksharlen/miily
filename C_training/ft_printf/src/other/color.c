/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:04:59 by ksharlen          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/07/01 17:29:43 by ksharlen         ###   ########.fr       */
=======
/*   Updated: 2019/07/02 16:02:29 by ksharlen         ###   ########.fr       */
>>>>>>> 68ed878699aa461c4405741323b0a3689cf4aa62
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_check_format(const char *string)
{
    char *format;

    format = NULL;
    if (!ft_memcmp(string, "greasy"))
        format = ";1";
    else if (!ft_memcmp(string, "italic"))
        format = ";3";
    else if (!ft_memcmp(string, "highlighted"))
        format = ";4";
    else
        return (0);
    ft_work_buf(format, ft_strlen(format));
    return (ft_strlen(format));
}

static int      ft_check_color(const char *string)
{
    char        *color;

    color = NULL;
    if (!ft_memcmp(string, "black", 5))
        color = "\033[30";
    else if (!ft_memcmp(string, "red", 3))
        color = "\033[31";
    else if (!ft_memcmp(string, "green", 5))
        color = "\033[32";
    else if (!ft_memcmp(string, "yellow", 6))
        color = "\033[33";
    else if (!ft_memcmp(string, "blue", 4))
        color = "\033[34";
    else if (!ft_memcmp(string, "purple", 6))
        color = "\033[35";
    else if (!ft_memcmp(string, "gay", 3))
        color = "\033[36";
    else if (!ft_memcmp(string, "white", 5))
        color = "\033[37";
    else
        return (0);
    ft_work_buf(color, ft_strlen(color));
    return (ft_strlen(color));
}

static int  ft_skipspace(int sym)
{
    return (sym == ' ' || sym == '\r' || sym = '\n' || sym = '\t' || sym == '\v');
}

static void        ft_define_color_format(const char *string)
{
    int shift_color;

    while (*string != '}' && *string)
    {
        if (ft_check_the_entry(COLOR, *stirng))
        {
            if (!(shift_color = ft_check_color(string)))
                return ;
            string += shift_color + 1;//1 это двоеточие
            shift_color = ft_check_format(string);
            if (!(shift_color))
                continue;
        }
        else if (*string == ':')
        {
            ft_check_format();
        }
        else
        {
            while (ft_skipspace(*string))
                *string++;
        }
    }
    return (string);
}

void        ft_color_format(const char *string)
{
    char *shift_str;

<<<<<<< HEAD
    while (ft_skipspace(*string) && *string)
        string++;
    if (*string == '/')
    {
        shift_str = ft_define_color_format(string + 1)//скипамем /
        if (shift_str == '}')
            return ()
    }
    else
        return ;
}
=======
	if ((color = ft_check_color(string)))
	{
		len = ft_strnlen(string, '}') + 1;
		ft_push_buf_and_clean_string(color, ft_strlen(color));
		return (len + 2);
	}
	else
		return (0);
	// char	*color;
	// char	*format;
	// int		shift;
	// char	*str;

	// if ((color = ft_check_color(string)))
	// {
	// 	printf("string = %s\n", string);
	// 	printf("color = %s\n", color);
	// 	printf("len = %ld\n", ft_strlen(color));
	// 	printf("string + len = %s\n", (string + ft_strlen(color)));
	// 	if ((*(string + ft_strlen(color))) == ':')
	// 	{
	// 		printf("test");
	// 		if ((format = ft_check_format(string + ft_strlen(color) + 1)))
	// 		{
	// 			if (*(string + ft_strlen(color) + ft_strlen(format) + 1) == '}')
	// 			{
	// 				str = ft_strjoin(color, format);
	// 				ft_push_buf_and_clean_string(str, ft_strlen(str));
	// 				shift = ft_strlen(str) + 2;
	// 			}
	// 		}
	// 	}
	// 			//printf("test\n");
	// }
}
>>>>>>> 68ed878699aa461c4405741323b0a3689cf4aa62
