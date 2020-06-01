import java.util.Scanner;
class Self
{
	int sumofdigit(int n)
	{ int sum=0,rem;
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		return sum;
	}
	void checkself(int n)
	{
		int i,sum=0,flag=0;
		for(i=0;i<=n;i++)
		{
			sum =i+sumofdigit(i);

			if(sum==n)
			{
				flag=1;
				System.out.println("NOT SELF");
				break;
			}
		}
		if(flag==0)
			System.out.println("SELF");
	}
	public static void main(String[] args)
	{
		
		Self s=new Self();
		Scanner k=new Scanner(System.in);
		System.out.println("enter the number :");
		int n=k.nextInt();

		s.checkself(n);
	}
}