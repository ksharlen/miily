/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:44:02 by cormund           #+#    #+#             */
/*   Updated: 2019/07/10 09:33:29 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <float.h>
#include "../ft_printf.h"

# define TWOPOWTWENTYEIGHT  268435456
# define FIVEPOWTWENTEEN    2197265625

typedef union				s_uni
{
	long double				num;
	struct
	{
		unsigned long		mantissa:64;
		short int			exp:15;
		unsigned int		sign:1;
	}						bits;
}							t_uni;

typedef struct				s_long
{
	unsigned int			*nbr_int;
    unsigned int	        *nbr_fract;
    unsigned int	        *nbr_tmp;
	int						len_int;
    int                     len_fract;
    int                     len_tmp;
}							t_long;

unsigned int    bin_power(int t, int k) // возведение t в степень k
{
	unsigned int res = 1;
	while (k)
	{
		if (k & 1)
    		res *= t;
		t *= t;
		k >>= 1;
    }
  return res;
}

void            multiplication_and_normalization(t_long *res, unsigned int multiplier, int len)
{
    unsigned int tmp;
    int         i;

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

void                addition_and_normalization(t_long *res, unsigned int *nbr, int *len)//? принять аргументом масиив 
{
    int             i;

    i = 0;
    while (i != res->len_tmp)
    {
       nbr[i] += res->nbr_tmp[i];
        if  (nbr[i] / 10)
            {
            nbr[i + 1] += nbr[i] / 10;
            nbr[i] %= 10;
            }
        ++i;
    }
    while (res->nbr_int[i] /    10)
    {
        nbr[i + 1] += nbr[i] / 10;
        nbr[i] %= 10;
         ++i;
    }
    if (i > *len)
        *len = i;
}

void            long_arithmetic_power(short int exponenta, t_long *res)
{
    res->nbr_tmp[0] = 1;
    res->len_tmp = (exponenta >= 0 ? 1 : CHECK_MOD(exponenta));
    printf("exponenta = %hd\n", exponenta);
    while (exponenta >= 28)
    {
        multiplication_and_normalization(res, TWOPOWTWENTYEIGHT, res->len_tmp);
        exponenta -= 28;
    }
    if (exponenta > 0)
        multiplication_and_normalization(res, bin_power(2, exponenta), res->len_tmp);
    while (exponenta <= -12)
    {
        printf("len_befor = %d\n", res->len_tmp);
        multiplication_and_normalization(res, FIVEPOWTWENTEEN, res->len_tmp);
        printf("len_after = %d\n", res->len_tmp);
        exponenta += 12;
    }
    if (exponenta < 0)
        multiplication_and_normalization(res, bin_power(5, CHECK_MOD(exponenta)), res->len_tmp);
}

void            long_arithmetic(t_uni *real_num, t_long *res)
{
    int			i;

	i = 64;
    res->len_int = 1;
	while (i--)
	{
        if (real_num->bits.mantissa >> i & 1)
        {
	        long_arithmetic_power(real_num->bits.exp, res);
            real_num->bits.exp >= 0 ? addition_and_normalization(res, res->nbr_int, &res->len_int) :\
            addition_and_normalization(res, res->nbr_fract + (res->len_fract - res->len_tmp), &res->len_fract);
            ft_bzero(res->nbr_tmp, sizeof(int) * res->len_tmp);
        }
        --real_num->bits.exp;
	}
}

void            malloc_long(t_uni *real_num, t_long *res)
{
    int         i;
    short int   exp;

    i = 64;
    exp = real_num->bits.exp;
    res->len_int = (exp > 0 ? exp / 3 + 2 : 1);
    res->len_fract = 6;
    while (i-- && !(real_num->bits.mantissa >> (63 - i) & 1))
        ;
    exp -= i;
    if (exp < 0 && NUM_MOD(exp) > 6)
    printf("exp = %hd\n", exp);
        res->len_fract = NUM_MOD(exp);
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

int             main(int ac, char **av)
{
    t_uni       real_num;
    t_long      res;

    real_num.num = 0.1;
    // real_num.num = LDBL_MAX;
    real_num.bits.exp -= 16383;
    malloc_long(&real_num, &res);
    printf("\n len = %d\n", res.len_fract);
    long_arithmetic(&real_num, &res);
    // while (res.len_int--)
    //     printf("%u", res.nbr_int[res.len_int]);
    while (res.len_fract--)
        printf("%u", res.nbr_fract[res.len_fract]);
    // printf("\n%f\n", 14.1);
    return (0);
}