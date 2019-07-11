/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_to_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 15:25:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/10 19:15:37 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void						test(t_uni *u)
{
	printf("exh = %d\n", u->bits.exp);
	printf("sign = %d\n", u->bits.sign);

	int i = 64;
	while (i--)
	{
		printf("%lu", u->bits.mantissa >> i & 1);
	}
	printf("\n");
}

ssize_t						ft_b_pow(int t, int k)
{
	ssize_t					res;

	res = 1;
	while (k)
	{
		if (k & 1)
    		res *= t;
		t *= t;
		k >>= 1;
    }
	return (res);
}

void						multiplication_and_normalization(t_long *res, unsigned int multiplier, int len)
{
	unsigned int			tmp;
	int						i;

	tmp = 0;
	i = 0;
	while (len)
	{
		res->nbr_tmp[i] *= multiplier;
		if (tmp)
			res->nbr_tmp[i] += tmp;
		if ((tmp = res->nbr_tmp[i] / 10))
			res->nbr_tmp[i] %= 10;
		--len;
		++i;
	}
	while (tmp)
	{
		res->nbr_tmp[i] += tmp;
		if ((tmp = res->nbr_tmp[i] / 10))
			res->nbr_tmp[i] %= 10;
		++i;
	}
	if (i > res->len_tmp)
		res->len_tmp = i;
}

void						addition_and_normalization(t_long *res, unsigned int *nbr, int *len)
{
    int						i;

	i = 0;
	while (i != res->len_tmp)
	{
		nbr[i] += res->nbr_tmp[i];
		while (nbr[i] > 9)
		{
			nbr[i + 1] += 1;
			nbr[i] -= 10;
		}
		++i;
	}
	while (nbr[i] > 9)
	{
		nbr[i + 1] += 1;
		nbr[i] -= 10;
		++i;
	}
	while (nbr[i])
		++i;
	if (i > *len)
		*len = i;
}

void						long_arithmetic_power(short int exponenta, t_long *res)
{
	res->nbr_tmp[0] = (unsigned int)1;
	res->len_tmp = (exponenta >= 0 ? 1 : CHECK_MOD(exponenta));
	while (exponenta >= 28)
	{
		multiplication_and_normalization(res, TWO_POW_TWENTY_EIGHT, res->len_tmp);
		exponenta -= 28;
	}
	if (exponenta > 0)
		multiplication_and_normalization(res, ft_b_pow(2, exponenta), res->len_tmp);
	while (exponenta <= -12)
	{
		multiplication_and_normalization(res, FIVE_POW_TWENTEEN, res->len_tmp);
		exponenta += 12;
	}
	if (exponenta < 0)
		multiplication_and_normalization(res, ft_b_pow(5, CHECK_MOD(exponenta)), res->len_tmp);
}

void            			long_arithmetic(t_uni *real_num, t_long *res)
{
    int						i;

	i = 64;
    res->len_int = 1;
	while (i--)
	{
        if (real_num->bits.mantissa >> i & 1)
        {
	        long_arithmetic_power(real_num->bits.exp, res);
            if (real_num->bits.exp >= 0)
				addition_and_normalization(res, res->nbr_int, &res->len_int);
			else
            	addition_and_normalization(res, res->nbr_fract + (res->len_fract - res->len_tmp), &res->len_tmp);
            ft_bzero(res->nbr_tmp, sizeof(int) * res->len_tmp);
        }
        --real_num->bits.exp;
	}
}

void						malloc_long(t_uni *real_num, t_long *res)
{
    int						i;
    short int				exp;

	exp = real_num->bits.exp;
	res->len_int = (exp > 0 ? exp / 3 + 2 : 2);
	i = 64;
	while (i-- && !(real_num->bits.mantissa >> (63 - i) & 1))
		;
	exp -= i;
	res->len_fract = (exp < -6 && i != -1 ? NUM_MOD(exp) : 6); //! -1 (может привести к ошибке)
	res->len_tmp = (res->len_int >= res->len_fract ? res->len_int : res->len_fract);
	res->nbr_int = (unsigned int *)malloc(sizeof(int) * res->len_int);
	res->nbr_tmp = (unsigned int *)malloc(sizeof(int) * res->len_tmp);
	res->nbr_fract = (unsigned int *)malloc(sizeof(int) * (res->len_fract + 1));
	if (!res->nbr_int || !res->nbr_tmp || !res->nbr_fract)
		exit(0);
	ft_bzero(res->nbr_int, sizeof(int) * res->len_int);
	ft_bzero(res->nbr_tmp, sizeof(int) * res->len_tmp);
	ft_bzero(res->nbr_fract, sizeof(int) * (res->len_fract + 1));
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

void						ft_double_to_str(va_list format)
{
	t_uni       			real_num;
	t_long					res;

	real_num.num = pull_double_arg(format);
	real_num.bits.exp -= 16383;
	// test(&real_num);
	malloc_long(&real_num, &res);
	long_arithmetic(&real_num, &res);
	printf("len = %d\n", res.len_int);
    while (res.len_int--)
        printf("%u", res.nbr_int[res.len_int]);
	printf(".");
	while (res.len_fract--)
        printf("%u", res.nbr_fract[res.len_fract]);
}
