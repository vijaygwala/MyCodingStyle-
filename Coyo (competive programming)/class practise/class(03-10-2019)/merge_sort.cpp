#include<iostream>
using namespace std;
void merge_sort(int,int,int);
void merge(int *a,int s,int mid,int e)
{
	int n1=mid-s+1;
	int n2=e-mid;
	int left[n1],right[n2];
	fill(left,left+n1,0);
	fill(right,right+n2,0);
	for(int i=0;i<n1;i++)
		left[i]=a[s+i];
	for(int i=0;i<n2;i++)
		right[i]=a[mid+i+1];
	int i=0,j=0,k=s;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
			{
				a[k++]=left[i++];
			}
		else 
			a[k++]=right[j++];
		
	}
	while(i<n1)
	{
		a[k++]=left[i++];
	}
	while(j<n2)
	{a[k++]=right[j++];
	}
	
	
	
}
void merge_sort(int *a,int f,int l)
{
	if(f<l)
	{
		int mid=f+(l-f)/2;
		merge_sort(a,f,mid);
		merge_sort(a,mid+1,l);
		merge(a,f,mid,l);
	}
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
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	
}
