#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

char			*ft_strdup(char *str);
static size_t	ft_strlen(const char *source_str);

int		main(void)
{
	char *p_str = "hello, how are you?";
	char *p_memalloc;

	p_memalloc = ft_strdup(p_str);
	printf("p_memalloc = %s\n", p_memalloc);
	return (0);
}

char	*ft_strdup(char *str)
{
	char 	*p_memalloc;
	size_t 	str_length;

	str_length = ft_strlen(str);
	printf("size_str = %ld\n", str_length + 1);
	p_memalloc = (char *)malloc(21 * sizeof(char));
	if (p_memalloc = NULL)
		return (NULL);
	p_memalloc[0] = str[0];
	return (p_memalloc);
}

static size_t	ft_strlen(const char *source_str)
{
	size_t		length_str;

	length_str = 0;
	while (*source_str++)
		length_str++;
	return (length_str);
}
