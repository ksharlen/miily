#include <stdio.h>

#define IN 	1
#define OUT 0

int		main(void)
{
	int symbal;
	int new_line;
	int new_word;
	int new_symbal;
	int state;

	state = OUT;
	new_line = new_word = new_symbal = 0;
	while ((symbal = getchar()) != '0')
	{
		++new_symbal;
		if (symbal == '\n')
			++new_line;
		if (symbal == ' ' || symbal == '\n' || symbal == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++new_word;
		}
	}
	printf("new_line = %d\nnew_word = %d\nnew_symbal = %d\n", new_line, new_word, new_symbal);
	return (0);
}
