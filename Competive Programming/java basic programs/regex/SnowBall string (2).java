import java.util.Scanner;
import java.util.regex.*;
class Snowball
{
	void checkstring(String s)
	{
		int flag=1,i=1;
		Pattern p=Pattern.compile("\\s");
		String []s1=p.split(s);
		
		for(String s2:s1)
		{if(s2.length()!=i)
			flag=0;
		i++;
		
		}

		if(flag==1)
		System.out.println("snow ball");
		else
			System.out.println("not snowball");
	}
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		Snowball p=new Snowball();
		System.out.println(" Enter the String :");
		String k=s.nextLine();
		p.checkstring(k);
	}
}