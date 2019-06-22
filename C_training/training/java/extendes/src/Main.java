public class Main
{
	public static void main(String args[])
	{
		Figure myFigure = new Figure();
		Square mySquare = new Square();
		int area;
		int perimetr;

		mySquare.setSides(4);
		area = mySquare.findArea();
		System.out.println("area = " + area);
		perimetr = mySquare.sumSides(4, 4, 4, 4);
		System.out.println("perimetr = " + perimetr);
	}
}