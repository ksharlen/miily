#include "main.h"

int		main(void)
{
	wchar_t *str;

	str = L"привет мир";
	while (*str)
		printf("%d\n", *str++);
	return (0);
}