#include "ft_str_header.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char 	*p_str;
	size_t 	temp;

	if (!*little)
		return (NULL);
	i = 0;
	p_str = (char *)big;
	while (big[i] != '\0')
	{
		j = 0;
		temp = len;
		while ((big[i + j] == little[j]) && --temp)
			j++;
		if (!temp)
		{
			p_str = (char *)&big[i];
			break;
		}
		i++;
	}
	return (p_str);
}
