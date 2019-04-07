#include <stdio.h>
#include <memory.h>

void	ft_numeric_array(int *array, size_t size);
void	ft_print_array(int *array, size_t size);

int		main(void)
{
	int ndigit[10];

	memset(ndigit, 0, 40);
	ft_numeric_array(ndigit, 10);
	ft_print_array(ndigit, 10);
	return (0);
}

void	ft_numeric_array(int *array, size_t size)
{
	int c, nwhite, nother;

	nwhite = nother = 0;
	while ((c = getchar()) != 'z')
		if (c >= '0' && c <= '9')
			++array[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
}

void	ft_print_array(int *array, size_t size)
{
	for (int i = 0; i < 10; ++i)
		printf(" %d", array[i]);
}
