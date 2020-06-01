#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,min,temp,n;
	cout<<"enter the size of array:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}	
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
