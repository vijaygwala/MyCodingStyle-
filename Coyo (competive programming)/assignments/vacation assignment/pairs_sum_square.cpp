#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		int n,flag=1;
		cin>>n;
		for(int i=0;i<=n/2;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if((i*i)+(j*j)==n)
				{	a=j;
					b=i;
					flag=0;
					cout<<"("<<a<<","<<b<<")"<<" ";
				
				}
			}
			
		}
		cout<<endl;
	
	}
}
