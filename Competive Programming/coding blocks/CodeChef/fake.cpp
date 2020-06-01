#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n;
		double s=0;
		long long c=0;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s=s+a[i];
		}
		double b=s/n;
		for(int i=0;i<n;i++)
		{
			if((s-a[i])/(n-1)==b)
			{
				c=i+1;
				break;
			}
		}
		if(c!=0)
		{
			cout<<c<<endl;
		}
		else
		{
			cout<<"Impossible"<<endl;
		}
	}
	return 0;
}
