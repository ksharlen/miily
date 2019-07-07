package inc;

public class Print {
	private String 	str;
	private int 	a;

	public void setString(String str) {
		this.str = str;
	}

	public void setInt(int a) {
		this.a = a;
	}

	public void printStr() {
		System.out.println(str);
	}

	public void printInt() {
		System.out.println(a);
	}
}