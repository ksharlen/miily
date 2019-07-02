
import lib.ArgTerm;
public class Main
{
	public static void main(String args[])
	{
		ArgTerm obj = new ArgTerm(args[1], args[2]);

		obj.print(obj);
	}
}