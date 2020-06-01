#include<iostream>
using namespace std;

int sqrt(int n);

int main()
{
	int n,int_flo,sum;
	cin>>n;
	int integer=sqrt(n);
	cout<<integer<<endl;
	for(float i=0.1;i<=0.9;i++)
		{	cout<<i<<" ";
			sum=integer+i;
			if(sum*sum>n)
				int_flo=sum-0.1;
		}
	cout<<int_flo<<endl;
	
		
}
int sqrt(int n)
{
	for(int i=1;i<=n/2;i++)
		if(i*i>n)
			return i-1;
}
