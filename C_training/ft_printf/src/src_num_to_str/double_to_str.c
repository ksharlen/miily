/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_to_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharlen <ksharlen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 15:25:14 by ksharlen          #+#    #+#             */
/*   Updated: 2019/07/14 14:02:56 by ksharlen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void						test(t_uni *u)
// {
// 	printf("exh = %d\n", u->bits.exp);
// 	printf("sign = %d\n", u->bits.sign);

// 	int i = 64;
// 	while (i--)
// 	{
// 		printf("%lu", u->bits.mantissa >> i & 1);
// 	}
// 	printf("\n");
// }

//! блок динной арифметики

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
	res->nbr_tmp[0] = 1;
	res->len_tmp = (exponenta >= 0 ? 1 : CHECK_MOD(exponenta));
	while (exponenta >= 28)
	{
		multiplication_and_normalization(res, TWO_POW_TWENTY_EIGHT, res->len_tmp);
		exponenta -= 28;
	}
	if (exponenta > 0)
		multiplication_and_normalization(res, ft_pow(2, exponenta), res->len_tmp);
	while (exponenta <= -12)
	{
		multiplication_and_normalization(res, FIVE_POW_TWENTEEN, res->len_tmp);
		exponenta += 12;
	}
	if (exponenta < 0)
		multiplication_and_normalization(res, ft_pow(5, CHECK_MOD(exponenta)), res->len_tmp);
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
	res->len_fract = (exp < -6 ? NUM_MOD(exp) : 6);
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
//! конец блока длинной арифметики

// !блок функций для spec f_F
static int					banker_rounding(t_long *res, int i)
{
	if (res->nbr_fract[i] > 5 || res->nbr_fract[i + 1] & 1 || (i + 1 == res->len_fract && res->nbr_int[0] & 1))
		return (1);
	while (i--)
	{
		if (res->nbr_fract[i])
			return (1);
	}
	return (0);
}

static int					rounding_number(t_long *res, int len)
{
	int						i;

	i = res->len_fract - len - 1;
	if (res->nbr_fract[i] >= 5 && banker_rounding(res, i) && (res->nbr_fract[++i] += 1))
		while(res->nbr_fract[i] == 10 && i != res->len_fract)
		{
			res->nbr_fract[i] = 0;
			res->nbr_fract[++i] += 1;
		}
	i = 0;
	if (res->nbr_fract[res->len_fract] && (res->nbr_int[i] += 1))
		while (res->nbr_int[i] == 10 && i != res->len_int)
		{
			res->nbr_int[i] = 0;
			res->nbr_int[++i] += 1;
		}
	if (res->nbr_int[res->len_int])
	{
		++res->len_int;
		return (1);
	}
	return (0);
}



char						*size_work_for_long(char *str, size_t size_num)
{
	if (g_spec.flags & DASH)
		ft_memset(str + size_num, ' ', g_spec.width - size_num);
	else if (!(g_spec.flags & ZERO))
	{
		ft_memset(str, ' ', g_spec.width - size_num);
		str += g_spec.width - size_num;
	}
	return (str);
}

static void					push_num_to_str(char *buf, t_long *res, size_t size_str, ssize_t size_num)
{
	size_str -= size_num;
	if ((g_spec.flags & SPACE || g_spec.flags & PLUS || g_spec.flags & DEC) && size_num--)
		*buf++ = chr_space_plus_dec();
	if (!(g_spec.flags & DASH) && g_spec.flags & ZERO)
		while (size_str--)
			*buf++ = '0';
	while (res->len_int-- && (size_num-- > 0))
		*buf++ = res->nbr_int[res->len_int] + '0';
	if (size_num-- > 0)
		*buf++ = '.';
	while (res->len_fract-- && (size_num-- > 0))
		*buf++ = res->nbr_fract[res->len_fract] + '0';
	while (size_num-- > 0)
		*buf++ = '0';
}
// !конец блока функций для spec f_F

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

static void					nan_infinity(t_uni *real_num)
{
	// if (real_num->bits.mantissa << 1)
	// {
	// 	if (g_spec.spec > 90)
	// 		fun_for_string(nan);
	// 	else
	// 		fun_for_string(NAN);
	// }
	// else
	// {
	// 	if (g_spec.spec > 90)
	// 		fun_for_string(inf);
	// 	else
	// 		fun_for_string(INF);
	// }
}

size_t						size_num_for_long(t_long *res)
{
	size_t					l;

	if (g_spec.spec == 'f' || g_spec.spec == 'F')
	{
		l = res->len_int + (g_spec.flags & DOT ? g_spec.accuracy : 6);
		l += rounding_number(res, l - res->len_int);
	}
	else
	{
		l = (g_spec.flags & DOT ? g_spec.accuracy + 1 : 7);
		/* code */
	}
	if (g_spec.flags & HASH || !(g_spec.flags & DOT) ||\
	(g_spec.flags & DOT && g_spec.accuracy))
		++l;
	if (g_spec.flags & SPACE || g_spec.flags & PLUS || g_spec.flags & DEC)
		++l;
	return (l);
}

//! ниже немного переписал наше с тобой творение - получилось короче + добавил size_write и size_buf в нужное место
char						*check_buf(ssize_t size_str)
{
	char					*buf;

	if (SIZE_BUF >= size_str)
	{
		if (g_spec.size_buf < size_str)
			write_buf_and_clean(WRITE_BUF);
		buf = work_buf(GET_POINT, 0);
		g_spec.size_write += size_str;
		g_spec.size_buf -= size_str;
	}
	else if (!(buf = ft_memalloc(size_str)))
		exit(0);
	return (buf);
}

void						double_to_str(va_list format)
{
	t_uni					real_num;
	t_long					res;
	char					*buf;
	size_t					size_num;
	size_t					size_str;

	real_num.num = pull_double_arg(format);
	real_num.bits.exp -= 16383;
	if (real_num.bits.sign)
		g_spec.flags |= DEC;
	if (real_num.bits.exp != -16384)
	{
		malloc_long(&real_num, &res);
		long_arithmetic(&real_num, &res);
		size_num = size_num_for_long(&res);
		size_str = g_spec.width > size_num ? g_spec.width : size_num;
		buf = check_buf(size_str);
		push_num_to_str(g_spec.width > size_num ?\
			size_work_for_long(buf, size_num) : buf, &res, size_str, size_num);
		if (SIZE_BUF < size_str)
			write_and_free_malloc(buf, size_str);
	}
	// else
		// nan_infinity(&real_num);
}
