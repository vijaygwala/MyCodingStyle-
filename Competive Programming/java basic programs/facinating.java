import java.util.Scanner;
class Facinating
{
	static int a[]=new int[10];
	void pushArray(int p)
	{
		
		while(p!=0)
		{
			int r=p%10;
			a[r-'0']+=1;
			p=p/10;
		}
	}

	void checkFacinating(int n)
	{
	 
		int multi2=n*2;
		int multi3=n*3;
		int flag=1;
		pushArray(n);
		pushArray(multi2);
		pushArray(multi3);
		for(int i=0;i<a.length;i++)
		{
			if(a[i]!=1)
			{
				System.out.println("Not facinating");
				flag=0;
				break;
		}
		}
		if(flag!=0)
			{
			System.out.println("Facinating");
			}
		}
public static void main(String[] args)
	{
		Facinating f=new Facinating();
		
		Scanner s =new Scanner(System.in);
		System.out.println("enter the  number :");
		int n=s.nextInt();
		f.checkFacinating(n);
	}

			

		
}