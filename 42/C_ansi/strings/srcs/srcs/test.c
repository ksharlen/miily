#include <stdio.h>

void	ft_skipspace(char **str);

int		main(void)
{
	char str[50];
	char *p_str = "hello world";
	
	printf("%c", p_str[1]);
//	fgets(str, 50, stdin);
//	p_str = str;
//	ft_skipspace(&p_str);
//	printf("p_str = %s\n", p_str);
	return (0);
}

void	ft_skipspace(char **str)
{
	while (**str == ' ')
		(*str)++;
}
