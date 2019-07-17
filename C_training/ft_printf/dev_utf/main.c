#include <wchar.h>
#include <stdio.h>

int		main(void)
{
	wchar_t *str;

	str = L"привет мир";
	printf("%S", str);
	return (0);
}