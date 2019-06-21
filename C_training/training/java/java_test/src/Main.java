public class Main
{
	public static void main(String args[])
	{
		printArgs obj = new printArgs(1, 2, 3);
		printArgs temp;

		obj.ft_print();
		obj.setInt(13, 24, 51);
		obj.ft_print();
		// System.out.printf("before method:\n");
		// obj.ft_print();
		// obj.setInt(4, 1, 2);
		// System.out.println("after method");
		// obj.ft_print();
		// System.out.println(obj.first);
		// System.out.println(obj.test);
		//System.out.println(obj.a);
	}
}