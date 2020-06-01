class Merge
{
	void merge(int[] a,int p,int q,int r)
	{
		int n1=q-p+1;
		int n2=r-q;
		int[] l=new int[n1];
		int[] r=new int[n2];
		for(int i=0;i<n1;i++)
		{
			l[i]=a[p+i-1];
		}
		for(int j=0;j<n2;j++)
		{
			r[j]=a[q+j];
		}
		i=0;
		j=0;
		for(int k=p;k<=r;k++)
		{
			if(l[i]<=r[j])
			{
				a[k]=l[i];
				i=i+1;
			}
			else
			{
				a[k]=r[j];
				j=j+1;
			}
		}
		 while (i < n1) 
    { 
        a[k] = l[i]; 
        i++; 
        k++; 
    } 
	while (j < n2) 
    { 
        a[k] = r[j]; 
        j++; 
        k++; 
    } 

	}
	void mergesort(int[] a,int p,int r)
	{
		if(p<r)
		{
			int q=(p+r)/2;
			mergesort(a,p,q);
			mergesort(a,q+1,r);
			merge(a,p,q,r);
		}
	}
	public static void main(String[] args)
	{
		Merge t=new Merge();
		int[] b={5,10,8,4,7,9,2};
		int c=0;
		int d=6;
		t.mergesort(b,c,d);
		for(int k=0;k<=6;k++)
		{
			System.out.println(b[k]);
		}
	}




			
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       xxxxxxxxx
}