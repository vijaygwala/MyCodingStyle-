import java.util.Scanner;
class Sphenic
{
	void checksphenic(int n)
	{
		int[] a={0,0,0};
		int j=0,flag,p;
		p=n;
		for(int i=2;n!=1;i++)
		{flag=0;
			while(n%i==0){
				flag++;
				n=n/i;
				
			}
			if(flag==1)
			{
				a[j++]=i;
			}
			if(j==a.length)
				break;

			
		}
		n=a[0]*a[1]*a[2];
		if(p==n)
		{
			System.out.println("Sphenic");
		}
		else
			System.out.println("Not sphenic");
		
	}
	public static void main(String[] args)
	{
		Sphenic s=new Sphenic();
		Scanner k=new Scanner(System.in);
		System.out.println("enter the positive number :");
		int n=k.nextInt();


		s.checksphenic(n);

	}
}

		


