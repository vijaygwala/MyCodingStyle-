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
	
		
	}
int main()
{
	int a[6]={6,7,4,3,7,1};
	selection_sort(a,6);
	for(int i=0;i<6;i++)
			cout<<a[i]+" ";
	return 0;
}
