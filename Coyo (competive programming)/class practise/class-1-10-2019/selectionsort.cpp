#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
	{
		int i,j,min_index;
	
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
			cout<<a[k]+" ";
	}
int main()
{
	int a[5]={6,7,4,3,9};
	selection_sort(a,5);
	return 0;
}
