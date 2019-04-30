#include "ft_str_header.h"

// size - размер dst с учетом нуль символа;
// size - strlen(dst) - 1 (столкьо будет скопированно в dsti) X
// size - 1 (копирует столько элементов в строку dst из строки src и в конец всегда добавляется нуль символ).
// Возвращает сумму длин строк dst и src.
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	int		size_all;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (ft_strlen(src) + size);
	size_all = size - len_dst;
	while (*dst)
		dst++;
	while ((*dst++ = *src++) && ((size_all - 1) > 0))
		--size_all;
	*(dst - 1) = '\0';
	return (len_src + len_dst);
}

// если dst >= size, мы возвращаем size + src(длинну)(strlen)
// size - dst - 1;
// size = dst + src;
