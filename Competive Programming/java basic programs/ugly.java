import java.util.Scanner;
class Ugly
{
	void checkugly(int n)
	{
		int i,count=0,N;
		for(i=2;i<100;i++)
		{
			N=i;
			while(true)
			{
				if(N%2==0)
					N=N/2;
				else if(N%3==0)
					N=N/3;
				else if(N%5==0)
					N=N/5;
				else if(N==1){
					count++;
					break;
				}
				else
					break;
			}
			
			if(count==n-1)
			{
				System.out.println(i);
				break;
			}
		}
	}
	public static void main(String[] args)
	{
		Ugly u=new Ugly();
		Scanner s =new Scanner(System.in);
		System.out.println("enter the nth ugly number :");
		int n=s.nextInt();
		u.checkugly(n);
	}

}