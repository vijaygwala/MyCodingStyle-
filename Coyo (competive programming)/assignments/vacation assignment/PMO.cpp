#include<iostream>
using namespace std;
int main()
{
	int t,k=0;
	cin>>t;
	long long int a[t][2],count,number;
	for(int k=0;k<t;k++)
		cin>>a[k][0]>>a[k][1];
	while(t--)
	{
	
		number=0;
		for(int i=a[k][0];i<=a[k][1];i++)
		{	count=0;
			for(int j=1;j<=i/2;j++)
			{
				if(i%j==0)
					count++;
			}
			if(count==1)
				number++;
		}
		cout<<number<<endl;
		k++;
	}
}
