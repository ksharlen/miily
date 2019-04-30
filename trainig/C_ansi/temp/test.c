#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_upp(int n);
int		num_shift(int n);
int		ft_key(int key);
int		(*menu(int))(int in);
int		ft_lower(int n);

int		main(void)
{
	int key;
	int	(*ft)(int);

	ft = ft_input()
	scanf("%d", &key);
	ft_key(key);
	return (0);
}

int		num_shift(int n)
{
	return (n + 17);
}

int	(*ft_input(int))(int in)
{
	int	(*func[3])(int)

	func[0] = num_shift;
	func[1]	= toupper;
	func[2] = tolower;
	
	return (func[ft_key]);
}

int		ft_key(int 	key)
{
	if (isdigit(key))
		return (0);
	else if (ft_lower(key))
		return (1);
	else if (ft_upp(key))
	return (2)
}

int		ft_upp(int n)
{
	if (n > 64 && n < 91)
		return (1);
	else
		return (0);
}

int		ft_lower(int n)
{
	if (n > 96 && n < 123)
		return (1);
	else
		return (0);
}
