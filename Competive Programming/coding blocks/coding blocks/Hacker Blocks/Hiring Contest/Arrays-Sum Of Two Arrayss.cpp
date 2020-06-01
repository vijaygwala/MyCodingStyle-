#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int size=(n>m)?n:m;
	int i=n-1,j=m-1,k=size-1;
	int c[size];
	while(i>=0 && j>=0)
	{
		c[k--]=a[i]+b[j];
		i--;
		j--;
	}
	while(i>=0)
	{
		c[k--]=a[i];
		i--;
	}
	while(j>=0)
	{
		c[k--]=b[j];
		j--;
	}
	int carry;

	for(int p=size-1;p>=0;p--)
	{
		if(c[p]/10)
			{
				carry=c[p]/10;
				if(p-1>=0)
					c[p-1]=c[p-1]+carry;
				if(p!=0)
					c[p]=c[p]%10;
			}
		
	}

	if(c[0]/10)
	{
		carry=c[0]/10;
		c[0]=c[0]%10;
		cout<<carry<<", ";
	}
	for(int i=0;i<size;i++)
		cout<<c[i]<<", ";
	cout<<"END"<<endl;
	
}
