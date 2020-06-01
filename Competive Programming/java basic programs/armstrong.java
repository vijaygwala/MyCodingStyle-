import java.util.Scanner;
class Armstrong
{
	void checkarmstrong(long n)
	{
		long sum=0;
		long rem;
		long p=n;

		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem*rem*rem;
			n=n/10;
		}
		if(sum==p)
			System.out.println("armstrong");
		else
			System.out.println("not armstrong");
	}
	public static void main(String[] args)
	{
		Armstrong u=new Armstrong();
		Scanner s =new Scanner(System.in);
		System.out.println("enter the  number :");
		int n=s.nextInt();
		u.checkarmstrong(n);
	}
}


