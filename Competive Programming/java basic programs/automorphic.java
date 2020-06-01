import java.util.Scanner;
class Automorphic
{
	void checkautomorphic(int n)
	{
		int i=1,r1,r2,number=0,number2=0;
		int square=n*n;

			while(n!=0)
		{
				r1=n%10;
				number=number+r1*i;
				
				n=n/10;

				r2=square%10;
				number2=number2+r2*i;
				square=square/10;
				i*=10;
		}
		if(number==number2)
			System.out.println("Automorphic");
		else
			System.out.println("Not Automorphic");
	}
	public static void main(String[] args)
	{
		Automorphic u=new Automorphic();
		Scanner s =new Scanner(System.in);
		System.out.println("enter the  number :");
		int n=s.nextInt();
		u.checkautomorphic(n);
	}
}