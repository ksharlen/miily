public class Stack
{
	private int stck[];
	private int tos;
	public	int size;

	Stack(int num)
	{
		this.size = num;
		stck = new int[num];
		tos = -1;
	}

	public void push(int num)
	{
		if (tos == stck.length - 1)
		{
			System.out.println("Стэк переполнен");
		}
		else
			stck[++tos] = num;
	}

	public int pop()
	{
		if (tos < 0)
		{
			System.out.println("Стэк пуст");
			return (0);
		}
		else
			return (stck[tos--]);
	}
}