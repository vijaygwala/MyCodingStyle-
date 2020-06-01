
import java.util.Scanner;
class Prime
{
	int prime(int n)
	{
		int i,count=0;
			for(i=1;i<=n/2;i++)
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
		System.out.println(count);
		return count;
		
	
	}
	void sphenic(int n)
	{
		int p,k=0;
		int[] a=new int[10];
		
		for(int i=1; i <= n; ++i)
    {
        if (n%i == 0)
        {
            p=prime(i);
			if(p==2)
			{a[k]=i;
			k=k+1;

			}
        }
    }
	for (int element: a) {
            System.out.println(element);
        }
	}


	public static void main(String[] args)
	{
		Prime p=new Prime();
		Scanner scan= new Scanner(System.in);
		System.out.println("enter the no. :");
		int k=scan.nextInt();
		p.sphenic(k);
	}
}



