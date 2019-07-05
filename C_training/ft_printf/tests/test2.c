/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:44:02 by cormund           #+#    #+#             */
/*   Updated: 2019/07/05 19:29:52 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

# define TWOPOWWENTYEIGHT   268435456

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
	unsigned int			*nbr;
    unsigned int			*nbr_b;
	int						len;
}							t_long;

void        number_normalization(unsigned int *num, int len)
{
    while (*num && len--)
    {
        if (*num / 10)
        {
            *(num + 1) = *num / 10;
            *num %= 10;
        }
        ++num;
    }
}

void        addition(t_long *res)
{
    int     len;
    int     i;

    len = res->len;
    i = 0;
    while (len--)
        res->nbr[i] += res->nbr_b[i++];
}

unsigned int    bin_power(unsigned int t, int k) // возведение t в степень k
{
	unsigned    int res = 1;
	while (k)
	{
		if (k & 1)
    		res *= t;
		t *= t;
		k >>= 1;
    }
  return res;
}

void            decimal_power(short int exponenta, t_long *res)
{
    res->nbr_b[0] = 1;
    while (exponenta / 28)
    {
        res->nbr_b[0] *= TWOPOWWENTYEIGHT;
        number_normalization(res->nbr, res->len);
        exponenta -= 28;
    }
    if (exponenta)
    {
        res->nbr_b[0] *= bin_power(2, exponenta);
        number_normalization(res->nbr, res->len);
    }
}

void            long_arithmetic(t_uni *real_num, t_long *res)
{
    int			i;

	i = 64;
	while (i-- && real_num->bits.exp >= 0)
	{
		if (real_num->bits.mantissa >> i & 1)
		{
			real_num->bits.exp >= 0 ? decimal_power(real_num->bits.exp, res) : 0;
            addition(res);
            ft_bzero(res->nbr_b, sizeof(int) * res->len);
            number_normalization(res->nbr, res->len);
		}
        --real_num->bits.exp;
	}
}

int             main(int ac, char **av)
{
    t_uni       val;
    t_long      res;
    short int   exp;

    val.num = 3435345423433.5;
    val.bits.exp -= 16383;
    res.len = val.bits.exp / 3 + 1; // только для положительной exp
    res.nbr = (unsigned int *)malloc(sizeof(int) * res.len); // только для положительной exp
    res.nbr_b = (unsigned int *)malloc(sizeof(int) * res.len);
    ft_bzero(res.nbr, sizeof(int) * res.len); // только для положительной exp
    ft_bzero(res.nbr_b, sizeof(int) * res.len);
    long_arithmetic(&val, &res);
    while (res.len--)
        printf("%d",res.nbr[res.len]);

    // t_long  a;
    // t_long  b;
    // int     len_a;
    // int     len_b;

    // a.len = ft_strlen(av[1]);
    // len_a = a.len;
    // b.len = ft_strlen(av[2]);
    // len_b = b.len;
    // a.nbr = (int *)malloc((a.len + 1) * sizeof(int));
    // b.nbr = (int *)malloc((b.len) * sizeof(int));
    // while(*av[1])
    // {
    //     a.nbr[--len_a] = *av[1]++ - '0';
    // }
    // while(*av[2])
    // {
    //     b.nbr[--len_b] = *av[2]++ - '0';
    // }
    // addition(a, b);

    // t_uni u;

    // u.num = 1;
    // printf("num = %d\n", u.num);
    // printf("b1 = %d\n", u.bits.b1);
    // printf("b2 = %d\n", u.bits.b2);
    // printf("b3 = %d\n", u.bits.b3);
    // printf("b4 = %d\n", u.bits.b4);
    // printf("b5 = %d\n", u.bits.b5);
    // printf("b6 = %d\n", u.bits.b6);
    // printf("b7 = %d\n", u.bits.b7);
    // printf("b8 = %d\n", u.bits.b8);
    return (0);
}