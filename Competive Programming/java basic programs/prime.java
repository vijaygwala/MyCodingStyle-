
import java.util.Scanner;
class Prime
{
	void prime(int n)
	{
		int i,count=0;
			for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
			if(count>2)
			{
				break;
			}
		}
		if(count==2)
			System.out.println("Prime");
		else
			System.out.println("Not prime");
	}
	public static void main(String[] args)
	{
		Prime p=new Prime();
		Scanner scan= new Scanner(System.in);
		System.out.println("enter the no. :");
		int k=scan.nextInt();
		p.prime(k);
	}
}



