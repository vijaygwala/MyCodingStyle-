import java.util.Scanner;
class Facinating
{
	int checknumber(int n)
	{
		int p,sum;
		p=n*2*3;
		sum=p+n;

		return sum;

	}
	boolean checkstring(int sum)
	{int c=0,h=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0;
		String s=Integer.toString(sum);
		int[] a= new int[10];
		String b="0123456789";
		
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)==b.charAt(0))
			{
				h++;
				a[0]=h;
			}

			else if(s.charAt(i)==b.charAt(1)){
				j++;
				a[1]=j;
			}

			else if(s.charAt(i)==b.charAt(2))
			{
				k++;
				a[2]=k;
			}
			else if(s.charAt(i)==b.charAt(3)){
				l++;
			a[3]=l;
			}
			else if(s.charAt(i)==b.charAt(4))
			{
				m++;
				a[4]=m;
			}
			else if(s.charAt(i)==b.charAt(5))
			{
				n++;
				a[5]=n;
			}
			else if(s.charAt(i)==b.charAt(6))
			{
				o++;
				a[6]=o;
			}
			else if(s.charAt(i)==b.charAt(7))
			{
				p++;
				a[7]=p;
			}
			else if(s.charAt(i)==b.charAt(8))
			{
				q++;
				a[8]=q;
			}
			else 
			{
				r++;
				a[9]=r;
			}
		}
		for(int d=1;d<a.length;d++)
		{
			if(2<=a[d] && a[d]<=9 )
			{
				c++;
			}
		}
		if(c>0 || s.length()<=2)
		{
			return false;
		}
		else
			return true;
	}
	public static void main(String[] args)
		{
		boolean b;
		Facinating s=new Facinating();
		Scanner k=new Scanner(System.in);
		
		System.out.println("enter the number :");
		int n=k.nextInt();
		for(int i=0;i<n;i++)
		{

		int h=s.checknumber(i);
		b=s.checkstring(h);
		if(b==true)
			System.out.println(i+"is faciliting");
		else
			System.out.println(i+"is not faciliting");

		}
	}
}


