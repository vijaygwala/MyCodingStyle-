import java.util.Scanner;
class Snowballl
{
	void checkstring(String s)
	{
		int flag=1;

		String [] s1=s.split("\\s");
		
		for(int i=0;i<s1.length;i++)
		{
			if(s1[i].length()!=i+1)
				flag=0;
			
		}
		
		if(flag==1)
		System.out.println("snow ball");
		else
			System.out.println("not snowball");
	}
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		Snowballl p=new Snowballl();
		System.out.println(" Enter the String :");
		String k=s.nextLine();
		p.checkstring(k);
	}
}