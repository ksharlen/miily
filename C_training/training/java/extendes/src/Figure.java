abstract class Figure
{
	public abstract void show();

	public final void print()
	{
		System.out.println("test_print");
	}

	public final void print(int a)
	{
		System.out.println("final print");
	}
}
