#include "ft_str_header.h"

static int 		ft_test_overflow(int value, const char *nptr, const short sign);
static void 	ft_array_for_ovw(short *array, const char *nptr);
static char		*ft_skip_space_and_sign(char *str, short *sign);
static void		ft_put_max_int_to_array(short *ovw);

int				ft_atoi(const char *nptr)
{
	short 	sign;
	int		value;
	size_t 	count;
	char	*p_skip_space;
	char	*p_str;

	count = 0;
	value = 0;
	p_skip_space = ft_skip_space_and_sign((char *)nptr, &sign);
	p_str = p_skip_space;
	while (*p_skip_space > '/' && *p_skip_space < ':' && count++ < 20)
		value = (10 * value) + (*p_skip_space++ - '0');
	if (count > 19 && sign == 1)
		return (-1);
	else if (count > 19 && sign == -1)
		return (0);
	if (count == 19)
		return (ft_test_overflow(value, p_str, sign));
	return (value * sign);
}

static int		ft_test_overflow(int value, const char *nptr, const short sign)
{
	short 		array[19];
	short 		ovw[19];
	int			size;

	ft_put_max_int_to_array(ovw);
	ft_array_for_ovw(array, nptr);
	size = ft_memcmp(array, ovw, 38);
	if (size >= 0 && sign == -1)
		return (0);
	else if (size >= 0 && sign == 1)
		return (-1);
	else
		return (value * sign);
}

static void		ft_array_for_ovw(short *array, const char *nptr)
{
	size_t i;

	i = 0;
	while (nptr[i] > '/' && nptr[i] < ':')
	{
		array[i] = nptr[i] - '0';
		i++;
	}
}
static char		*ft_skip_space_and_sign(char *str, short *sign)
{
	*sign = 1;
	while (*str < 33 || *str == '0')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = -1;
		++str;
		while (*str == '0')
			++str;
	}
	return (str);
}

static void		ft_put_max_int_to_array(short *ovw)
{
	size_t	pos;
	size_t	i;

	i = 0;
	pos = 7085774586302733229;
	while (i < 19)
	{
		ovw[i] = pos % 10;
		i++;
		pos /= 10;
	}	
}
