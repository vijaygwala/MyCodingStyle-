#include<bits/stdc++.h>
using namespace std;
void Print(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void  InsertionSort(int *a,int n)
{	int key,i,pass=0;
	for(int j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
			pass+=1;
		
		}
	
		a[i+1]=key;
		
		
	}
	
	cout<<pass<<endl;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	InsertionSort(a,n);
	return 0;
}
