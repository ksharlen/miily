/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:55:37 by ksharlen          #+#    #+#             */
/*   Updated: 2019/06/27 16:29:25 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

typedef struct		s_spec
{
	char			*size_type;
}					t_spec;

//t_spec				g_spec;

static int		ft_mod(char *form, t_spec *g_spec)
{
	if (*form == 'l')
	{
		if (*(form + 1) == 'l')
		{
			g_spec->size_type = "ll";
			return (2);
		}
		g_spec->size_type = "l";
		return (1);
	}
	else if (*form == 'h')
	{
		if (*(form + 1) == 'h')
		{
			g_spec->size_type = "hh";
			return (2);
		}
		g_spec->size_type = "h";
		return (1);
	}
}

static int		ft_ismy(char form)
{

	if (((form >= 0 && form < 35) || form == 37 || form == '%' ||
	form == '$' || form == '&' || form == 40 || form == 41 ||
	form == ',' || form == '/' || (form > 59 && form < 76) ||
	(form > 76 && form < 95) ||	(form > 95 && form < 104) ||
	(form > 104 && form < 106) || (form > 106 && form < 108) ||
	(form > 108 && form < 116) || (form > 116 && form < 122) || form > 122))
	{
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
	int shift;
	t_spec		g_spec;

	g_spec.size_type = NULL;
	shift = 0;
	sum = 0;
	while (!ft_ismy(*form) && *form)
	{
		if (ft_memchr(SIZE_MOD, *form, ft_strlen(SIZE_MOD)))
		{
			shift = ft_mod(form, &g_spec);
			form += shift;
			//printf("testing\n");
			//printf("g_spec_size_type = %s\n", g_spec.size_type);
		}
		else
			++form;
	}
	//printf("g_spec.size_type = %s\n", g_spec.size_type);
	//printf("shift = %d\n", shift);
	return (*form);
}

int		main(void)
{
	char *str = ".+hhlld";

	//g_spec.size_type = NULL;
	ft_test(str);
	//printf("")
	return (0);
}