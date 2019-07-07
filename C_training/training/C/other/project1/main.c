#include "main.h"

int		main(void)
{
	printf("1");
	int maxSize;
	const char *s1[] = {"hello world", "how are you?", "one"};
	const char *s2[] = { "testing", "string", "two"};

	maxSize = mxdiflg(s1, 3, s2, 3);
	printf("maxSize = %d\n", maxSize);
	return (0);
}