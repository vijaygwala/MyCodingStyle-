#include<iostream>
using namespace std;
int main()
{
	int t;

	cin>>t;
	for(int k=0;k<t;k++)
	{
	long long count=0,n ;
	double mean,steal,sum=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	mean=sum/n;
		for(int j=0;j<n;j++)
		{
			
			if((sum-a[j])/(n-1)==mean)
			{
			count=1+j;
			break;
			}
			
		}
		if(count>0)
			cout<<count<<endl;
		else
			cout<<"Impossible";
		}
	}

		
		
			
	
		


