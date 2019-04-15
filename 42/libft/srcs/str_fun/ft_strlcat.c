#include "ft_str_header.h"

// size - размер dst с учетом нуль символа;
// size - strlen(dst) - 1 (столкьо будет скопированно в dsti) X
// size - 1 (копирует столько элементов в строку dst из строки src и в конец всегда добавляется нуль символ).
// Возвращает сумму длин строк dst и src.
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	
}

// если dst >= size, мы возвращаем size + src(длинну)(strlen)
// size - dst - 1;
// size = dst + src;
