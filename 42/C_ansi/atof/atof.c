#include <stdio.h>

static int		isspace(int n);
double			atof(char *s);
static int		isdigit(int n);

int		main(void)
{
	char s[] = "123.256.";
	double res;

	res = atof(s);
	printf("res = %f\n", res);
}

double	atof(char *s)
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	return (sign * val / power);
}

static int		isspace(int n)
{
	if (n < 33)
		return (1);
	else
		return (0);
}

static int		isdigit(int n)
{
	if (n > 47 && n < 58)
		return (1);
	else
		return (0);
}
