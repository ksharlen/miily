public class Square extends Figure
{
	private int side_a;
	private int side_b;
	private int side_c;
	private int side_d;

	Square()
	{
		side_a = -1;
		side_b = -1;
		side_c = -1;
		side_d = -1;
	}

	public void setSides(int a, int b, int c, int d)
	{
		side_a = a;
		side_b = b;
		side_c = c;
		side_d = d;
	}

	public void setSides(int a)
	{
		side_a = side_b = side_c = side_d = a;
	}

	public int findArea()
	{
		int s;
		s = area = side_a * side_b;
		return (s);
	}

	public int sumSides(int ... side)
	{
		int sum = 0;

		for (int num : side)
			sum += num;
		return (sum);
	}
}