import java.lang.Math;
import java.util.Scanner;
class Triplet
{
	void findtriplet(int limit)
	{
		int i,j,hyp;
		for(i=1;i<limit;i++)
		{
			for(j=1;j<limit;j++)
			{
				hyp=(i*i)+(j*j);
			double root=Math.sqrt(hyp);
				if(root<limit && root%1==0)
				{
					System.out.println(i+" "+j+" "+root);
					break;
				}
			}
		}
	}
	public static void main(String[] args)
	{
		Triplet u=new Triplet();
		Scanner s =new Scanner(System.in);
		System.out.println("enter the limit of number :");
		int n=s.nextInt();
		u.findtriplet(n);
	}
}

	
