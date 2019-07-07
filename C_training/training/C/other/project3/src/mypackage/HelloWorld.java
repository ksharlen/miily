package mypackage;
import inc.*;

public class HelloWorld {
	public static void main(String args[]) {
		Print obj = new Print();

		obj.setString("hello world");
		obj.setInt(123456);
		System.out.println("String: ");
		obj.printStr();
		System.out.println("Int: ");
		obj.printInt();
	}
}