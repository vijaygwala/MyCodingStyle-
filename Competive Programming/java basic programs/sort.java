
import java.util.Scanner;
class Sort
{
	void selectionsort(int a[])
	{
		int i,j,min_index,n;
		n=a.length;
		for(i=0;i<n-1;i++)
		{
			min_index=i;
			for(j=i+1;j<n;j++)
				if(a[j]<a[min_index])
					min_index=j;
			int temp=a[i];
				a[i]=a[min_index];
				a[min_index]=temp;
		}
		for(int k=0;k<n;k++)
			System.out.print(a[k]+" ");
	}
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		Sort s1=new Sort();
		System.out.println("enter the size of array :");
		int n=s.nextInt();
		int[] a=new int[n];
			int i;
		for(i=0;i<n;i++)
		{
			int k=s.nextInt();
			a[i]=k;
		}
		s1.selectionsort(a);
	}
				
					
}