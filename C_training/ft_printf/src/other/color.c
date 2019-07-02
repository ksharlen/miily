/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:04:59 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/02 15:16:45 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     ft_check_end(const char *string)
{
	if (*string == ':')
		return (1);
	else if (*string == '}')
		return (2);
	else
		return (0);
}

static char		*ft_check_format(const char *string)
{
	char *format;

	format = NULL;
	if (!ft_memcmp(string, "greasy", 6))
		format = ";1";
	else if (!ft_memcmp(string, "italic", 6))
		format = ";3";
	else if (!ft_memcmp(string, "highlighted", 11))
		format = ";4";
	else
		return (NULL);
	return (ft_strdup(format));
}

static char		*ft_check_color(const char *string)
{
	char        *color;

	color = ft_memalloc(11);
	if (!ft_memcmp(string, "black", 5) && *(string + 5) == '}')
		color = ";30m";
	else if (!ft_memcmp(string, "red", 3) && *(string + 3) == '}')
		color = ";31m";
	else if (!ft_memcmp(string, "green", 5) && *(string + 5) == '}')
		color = ";32m";
	else if (!ft_memcmp(string, "yellow", 6) && *(string + 6) == '}')
		color = ";33m";
	else if (!ft_memcmp(string, "blue", 4) && *(string + 4) == '}')
		color = ";34m";
	else if (!ft_memcmp(string, "purple", 6) && *(string + 6) == '}')
		color = ";35m";
	else if (!ft_memcmp(string, "gay", 3) && *(string + 3) == '}')
		color = ";36m";
	else if (!ft_memcmp(string, "white", 5) && *(string + 5) == '}')
		color = ";37m";
	else
		return (NULL);
	return (ft_strdup(color));
}

static void	ft_push_buf_and_clean_string(char *str_clean, int size_str)
{
	char *str;

	str = "\e[";
	ft_work_buf("\e[", 2);
	ft_work_buf(str_clean, size_str);
	ft_strdel(&str_clean);
}

int			ft_color_format(const char *string)
{
	char 	*color;
	int		shift;
	int		len;

	if ((color = ft_check_color(string)))
	{
		len = ft_strnlen(string, '}') + 1;
		printf("len = %ld\n", len);
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
