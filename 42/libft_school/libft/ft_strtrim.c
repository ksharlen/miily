#include "libft.h"

static int	ft_space(int n)
{
	if (n == ' ' || n == '\t' || n == '\n')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	int		len;
	int		space_end;
	char	*p_dyn;

	p_dyn = NULL;
	if (s)
	{
		space_end = 0;
		while ((ft_space(*s)))
			s++;
		len = ft_strlen(s);
		if (!len)
		{
			p_dyn = ft_strnew(0);
			return (!p_dyn ? NULL : p_dyn);
		}
		while (ft_space(s[len --- 1]))
			;
		p_dyn = ft_strnew(len + 1);
		if (!p_dyn)
			return (NULL);
		ft_strncpy(p_dyn, s, len + 1);
	}
	return (p_dyn);
}
