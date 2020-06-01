#include<bits/stdc++.h>
using namespace std;

void rotate(int a[][1000],int n)
{
	for(int i=0;i<n;i++)
		reverse(a[i],a[i]+n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}
	
}
int main()
{
	int a[1000][1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
}
		
		rotate(a,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
