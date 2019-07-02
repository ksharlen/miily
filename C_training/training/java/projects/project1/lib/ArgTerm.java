package lib;

public class ArgTerm
{
	private int id;
	private String name;
	private String password;

	ArgTerm(String name, String password)
	{
		this.name = name;
		this.password = password;
		id = 0;
	}

	private void setId(ArgTerm obj)
	{
		++obj.id;
	}

	public void	print(ArgTerm obj)
	{
		setId(obj);
		System.out.printf("Ваше имя: %s\nВаш пароль: %s\nВаш персональный ID: %d", name, password, obj.id);
	}
}