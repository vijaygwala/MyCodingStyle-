import java.util.Scanner;
class Super_prime
{
	
	void checksuperprime(int n)
	{	int count=0;
		boolean b;
	

	
		for(int i=2;i<=n;i++)
		{
			
			 b=checkprime(i);
			if(b==true)
				count++;
			
		}
		boolean c=checkprime(count);
		if(c==true)
			System.out.println("Super Prime");
		else
			System.out.println("Not Superprime");
	}
boolean checkprime(int n)
	{
	int count=0;
	for(int i=1;i<=n/2;i++)
		{
		if(n%i==0)
			count++;
		}
		if(count==1)
			return true;
		else 
			return false;
	}
	public static void main(String[] args)
	{
		Super_prime s=new Super_prime();
		Scanner k=new Scanner(System.in);
		System.out.println("enter the positive number :");
		int n=k.nextInt();
		boolean b;

		b=s.checkprime(n);
		if (b==true)
		{
			s.checksuperprime(n);
		}
		else
		{
			System.out.println("Not Superprime");
		}

	}
}
