#include "main.h"
#include <string.h>
#include <stdlib.h>
#include "../include/ft_printf.h"
#include "../include/libft.h"

int		main(void)
{
	// wchar_t *str1 = L"Привет мир";
	// int		str[20];
	// t_utf utf;
	// size_t	index;
	// size_t	len;

	// len = wcslen(str);
	// printf("len = %ld\n", len);
	// index = 0;
	// while (index < len)
	// {
	// 	utf = work_utf(utf);
	// 	str[index] = utf.utf_sym;
	// 	index++;
	// }
	// printf("%s", str);
	// //printf("%lc\n", utf.utf_sym);
	// //printf("%C\n", 'ж');
	// //printf("%u\n", utf.utf_sym);
	// //wprintf(L"Привет мир");
	// printf("%lc", L'п');
	// char *str = "Привет мир";
	// size_t len;
	// char *salloc;

	// salloc = malloc(100);
	// salloc = "Привет мир";
	// printf("salloc = %s\n", salloc);
	// printf("char = %u\n", *(unsigned *)salloc);
	// ft_printf("%b\n", *(unsigned short *)salloc);
	unsigned char str[10];
	unsigned char sym;
	t_utf utf;

	utf.unicode = 128075;
	utf.bytes = def_num_bytes(utf.unicode);
	utf = work_utf(utf);
	printf("utf = %u\n", utf.utf_sym);
	bzero(str, 10);
	sym = utf.utf_sym;
	printf("sym = %d\n", sym);
/*
**	str[index] = utf.utf_sym >> (8 * (bytes - 1));
**	//inbuf work_buf(utf.utf_sym >> (8 * (bytes - 1)));
**	bytes--;
*/
	str[0] = utf.utf_sym >> (8 * 3);
	str[1] = utf.utf_sym >> (8 * 2);
	str[2] = utf.utf_sym >> 8;
	str[3] = utf.utf_sym;
	printf("%s\n", str);
	// str[0] = 240;
	// str[1] = 159;
	// str[2] = 145;
	// str[3] = 139;
	// str[4] = 0;
	// str[0] = 208;//Русская А
	// str[1] = 144;//
	// str[2] = 0;
	//printf("%s\n", str);
	//printf("%s%20s", "Привет мир\n", "hello world\n");
	return (0);
}