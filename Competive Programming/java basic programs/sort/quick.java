class Quick
{
	int partion(int[] a,int p,int r)
	{
		int x,i,temp;
		x=a[r];
		i=p-1;
		for(int j=p; j<=r-1;j++)
		{
			if(a[j]<=x)
			{
				i=i+1;
				 temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[i+1];
		a[i+1]=a[r];
		a[r]=temp;
		return i+1;
	}
	void quicksort(int[] a,int p,int r)
	{
		int q;
		if(p<r)
		{
			q=partion(a,p,r);
			quicksort(a,p,q-1);
			quicksort(a,q+1,r);
		}
	}

	public static void main(String[] args)
	{
		Quick t=new Quick();
		int[] b={5,10,8,4,7,9,2};
		int c=0;
		int d=6;
		t.quicksort(b,c,d);
		for(int k=0;k<=6;k++)
		{
			System.out.println(b[k]);
		}
	}


}