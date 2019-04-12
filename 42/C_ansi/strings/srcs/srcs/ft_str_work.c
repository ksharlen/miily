#include "ft_main.h"

void	ft_skip_space(char **str)
{
	while (**str < 33)
		(*str)++;
}

size_t	ft_space_count(char *p_str)
{
	size_t count;

	count = 0;
	while (*p_str++ == ' ')
		count++;
	return (count);
}

void    ft_main_space(char *str)
{
    size_t     	i;
    int     	j;
    int     	k;
    size_t  	space;

    ft_skip_space(&str);
	i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == ' ') && (str[i + 1]) == ' ')
        {
            k = i;
            space = ft_space_count(str);
            j = space + i;
            while (str[j])
            {
                str[k++] = str[j++];
            }
		
    	}
		i++;
    }
}
