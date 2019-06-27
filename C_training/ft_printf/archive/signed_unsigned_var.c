static long long int			ft_signed_format(va_list format)
{
	long long int				ret;

	ret = 0;
	if (!g_spec.size_type)
		ret = va_arg(format, int);
	else
	{
		if (!(ft_memcmp(g_spec.size_type, "l", 1)))
			ret = va_arg(format, long int);
		else if (!(ft_strcmp(g_spec.size_type, "ll")))
			ret = va_arg(format, long long int);
		else if (!(ft_strcmp(g_spec.size_type, "h")))
			ret = (short)va_arg(format, int);
		else if (!(ft_strcmp(g_spec.size_type, "hh")))
			ret = (char)va_arg(format, int);
		else if (!(ft_strcmp(g_spec.size_type, "j")))
			ret = va_arg(format, intmax_t);
		else if (!(ft_strcmp(g_spec.size_type, "z")))
			ret = va_arg(format, ssize_t);
	}
	return (ret);
}

static unsigned long long int	ft_unsigned_format(va_list format)
{
	unsigned long long int		ret;

	ret = 0;
	if (!g_spec.size_type)
		ret = va_arg(format, unsigned int);
	else
	{
		if (!(ft_strcmp(g_spec.size_type, "l")))
			ret = va_arg(format, unsigned long int);
		else if (!(ft_strcmp(g_spec.size_type, "ll")))
			ret = va_arg(format, unsigned long long int);
		else if (!(ft_strcmp(g_spec.size_type, "h")))
			ret = (unsigned short)va_arg(format, unsigned int);
		else if (!(ft_strcmp(g_spec.size_type, "hh")))
			ret = (unsigned char)va_arg(format, unsigned int);
		else if (!(ft_strcmp(g_spec.size_type, "j")))
			ret = va_arg(format, uintmax_t);
		else if (!(ft_strcmp(g_spec.size_type, "z")))
			ret = va_arg(format, size_t);
		//?Подумать какой тип применить к р
		else if (g_spec.spec == 'p')
			ret = va_arg(format, uintptr_t);
	}
	return (ret);
}