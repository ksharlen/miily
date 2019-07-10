/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_to_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 15:25:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/08 18:33:05 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

typedef union				s_uni
{
	long double				num;
	struct
	{
		unsigned long		mantissa:64;
		short int			exh:15;
		unsigned int		sign:1;
	}						bits;
}							t_uni;

typedef struct				s_long
{
	int						*nbr;
	int						len;
}							t_long;


int bin_power(int t, int k) // возведение t в степень k
{
	int res = 1;
	while (k)
	{
		if (k & 1)
    		res *= t;
		t *= t;
		k >>= 1;
    }
  return res;
}

static long double			pull_double_arg(va_list format)
{
	long double				ret;

	ret = 0.0;
	if (g_spec.mod == DASH)
		ret = va_arg(format, long double);
	else
		ret = va_arg(format, double);
	return (ret);
}

// static void					test1(t_uni realis)
// {
// 	int						i;

// 	i = 64;
// 	while (i >= 0)
// 	{
// 		if (realis.bits.mantissa & (1L << i))
// 		{
// 			(realis.bits.exh - 16383) >= 0 ? bin_power()
// 		}
// 	}
// }

void						test(t_uni *u)
{
	printf("num = %Lf\n", u->num);
	u->bits.exh -= 16383;
	printf("exh = %d\n", u->bits.exh);
	printf("sign = %d\n", u->bits.sign);

	int i = 64;
	while (i--)
	{
		printf("%lu", u->bits.mantissa >> i & 1);
	}

	printf("\nbin_power = %d\n", bin_power(2,28));
}

void						ft_double_to_str(va_list format)
{
	t_uni					val;

	val.num = pull_double_arg(format);
	test(&val);
}