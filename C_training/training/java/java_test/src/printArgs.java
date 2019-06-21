public class printArgs
{
	int a;
	int b;
	int c;
	printArgs first;
	boolean test;

	printArgs(int a1, int b1, int c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}

	public void ft_print()
	{
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
	}

	public void	setInt(int a, int b, int c)
	{
		this.a = a;
		this.b = b;
		this.c = c;
	}

	public int ft_sum()
	{
		return (a + b + c);
	}
	// public void	setInt(int num)
	// {
	// 	num_test = num;
	// }
	// public int getInt()
	// {
	// 	return (num_test);
	// }
	// public void print_args(String arg)
	// {
	// 	System.out.printf("arg -> %s\n", arg);
	// }
	// public void	printArray(String str[])
	// {
	// 	int i;

	// 	i = 1;
	// 	for (String print : str)
	// 		System.out.printf("%d) %s\n", i++, print);
	// }
	// public static void print_all(printArgs obj)
	// {
	// 	System.out.printf("Было введено число %d\n", obj.num_test);
	// }
}