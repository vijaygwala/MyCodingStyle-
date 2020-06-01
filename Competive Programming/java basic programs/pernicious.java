import java.util.Scanner;
class Pernicious
{
	int binary(int n)
	{
		
		int i=1,r;
		int b=0;
			while(n!=0)
		{
			r=n%2;
			b=b+r*i;
			i=i*10;
			n=n/2;
		
		}
		
		
		return b;
		
	}
	int checkone(int l)
	{
		int count=0;
		String s1="1";
		String s=Integer.toString(l);
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)==s1.charAt(0))
			{
				count=count+1;
			}
		}
		

		return count;
	}
	boolean prime(int n)
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
			return true;
		else
			return false;
	}

	public static void main(String[] args)
	{
		Pernicious p=new Pernicious();
		Scanner s=new Scanner(System.in);
		System.out.println("series upto  :");
		int k=s.nextInt();
		for(int j=2;j<=k;j++)
		{
		
			int c=p.binary(j);
		int h=p.checkone(c);
		boolean a=p.prime(h);
			if (a==true)
			{
				System.out.println(j);
			}
		}
		
	}
}