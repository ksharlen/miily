#include <stdio.h>

void	squeeze(char *s, int c);
void	str_squeeze(char *s, char *f);

int		main(void)
{
	char str[50] = "hello world";
	enum test
	{
		jan = 1,
		feb = 10,
		mar = 'c',
		apr
	};
	printf("str = %s\n", str);
//	squeeze(str, 'l');
	str_squeeze(str, "ol");
	printf("str = %s\n", str);
	return (0);
}

void squeeze(char *s, int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

void	str_squeeze(char *s, char *f)
{
	int i;
	int j;

	i = 0;
	while (f[i])
	{
		squeeze(s, f[i]);
		i++;
	}
}
