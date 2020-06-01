#include<iostream>
using namespace std;
int partion(int*,int,int);
quick_sort(int *a,int s,int e)
{
	if(s<e)
	{
		int q=partion(a,s,e);
		quick_sort(a,s,q-1);
		quick_sort(a,q+1,e);
	}
}
int partion(int *a,int s,int e)
{	int pivot=a[e];
	int i=s-1,j,temp;
	for( j=s;j<=e-1;j++)
	{
		if(a[j]<=pivot)
		{
			i+=1;
		 temp=a[j];
		 a[j]=a[i];
		 a[i]=temp;
		}
	}
	temp=a[e];
	a[e]=a[i+1];
	a[i+1]=temp;
	return i+1;
	
}
int main()
{
	int n;
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
}
