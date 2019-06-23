public class Main
{
	public static void main(String args[])
	{
		int num[] = new int[10];
		//Object test;

		num[0] = 10;
		num[1] = 5;
		num[2] = 55;
		//test = num;
		for (Object a : num)
			System.out.println(a);
	}
}