#include "ft_printf.h"

int		main(void)
{
	// ft_printf("string1: %S\n", L"Привет мир");
	// ft_printf("string1.1: %S\n", "Привет мир");

	// ft_printf("string2: %ls\n", L"Привет мир");
	// ft_printf("stirng2.1: %ls\n", "Привет мир");

	// ft_printf("string3: %s\n", L"Привет мир");
	// ft_printf("string3.1: %s\n", "Привет мир");

	// ft_printf("char1: %C\n", L'П');
	// ft_printf("char1.1: %C\n", 'П');

	// ft_printf("char2: %lc\n", L'П');
	// ft_printf("char2: %lc\n", 'П');

	// ft_printf("char2: %c\n", L'П');
	// ft_printf("char2: %c\n", 'П');

	// ft_printf("chara1: %C\n", L'h');
	// ft_printf("chara1.1: %C\n", 'h');

	// ft_printf("chara2: %lc\n", L'h');
	// ft_printf("chara2.1: %lc\n", 'h');

	// ft_printf("chara3: %c\n", L'h');
	// ft_printf("chara3.1: %c\n", 'h');

	// ft_printf("%ls", NULL);

	// ft_printf("%f\n", 124.4123);

	//ft_printf("color {/purple} how are you?");
	int a;

	a = 0;
	SET_BIT(a, 3);
	//printf("a = %d\n", a);
	ft_printf("String = %ls\n", L"Привет мир!!!");
	return (0);
}