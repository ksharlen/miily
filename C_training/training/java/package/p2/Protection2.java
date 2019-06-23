package p2;

class Protection2 extends p1.Protection
{
	Protection2()
	{
		System.out.println("Конструктор унаследованный из другого пакета");
		//доступно только для данного класса или пакета
		//System.out.println("n = " + n);

		//Доступно только для данного класса
		//System.out.println("n_pri = " + n_pri);

		System.out.println("n_pro = " + n_pro);
		System.out.println("n_pub = " + n_pub);
	}
}