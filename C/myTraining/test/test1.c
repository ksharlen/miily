#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	char 	p[20] = "hello world";
	char 	*p_alloc;
	int		p_len;

	p_len = strlen(p);
	p_alloc = (char *)malloc(sizeof(char) * p_len);
	strcpy(p_alloc, p);
	return (0);
}
