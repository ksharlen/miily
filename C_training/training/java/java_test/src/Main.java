public class Main
{
	public static void main(String args[])
	{
		Stack obj = new Stack(4);
		Stack obj2 = new Stack(6);

		for (int i = 0; i++ < obj.size; )
			obj.push(i);
		for (int i = 0; i++ < obj2.size; )
			obj2.push(i);

		System.out.println("obj Stack: ");
		for (int i = 0; i++ < obj.size; )
			System.out.println(obj.pop());
		System.out.println("obj1 Stack: ");
		for (int i = 0; i++ < obj2.size; );
			System.out.println(obj2.pop());
	}
}
