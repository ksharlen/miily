#include <stdio.h>

int		main(void)
{
	char 	symbal;
	int		new_line;
	int		space;

	space = ' ';
	new_line = '\n';
	while ((symbal = getchar()) != '0')
	{
		if (symbal == space)
				symbal = new_line;
		putchar(symbal);
	}
	return (0);
}
