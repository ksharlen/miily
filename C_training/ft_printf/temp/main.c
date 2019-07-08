#include "main.h"
#include "ft_printf.h"

t_spec	g_spec;

int		main(void)
{
	char *testing;

/*
**	data_to_str(va_list format, unsigned long long int data)
**	{
**		//вызов вытаскивания аргумента
**		//вызов уплотнения data в структуру
**		//вызов обработки переполнения
**		//вызов ф-ии для добавления результата в буфер
**	}
*/
	g_spec.size_write = 0;
	g_spec.size_buf = SIZE_BUF;
	data_to_str(0);

	return (0);
}

//gcc -I ../ main.c src1.c src.c ../src/buf/buf.c libft.a