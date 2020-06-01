#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,i=1;
	cin>>n;
	while(n!=0)
	{
		r=n%8;
		sum=i*r+sum;
		i=i*10;
		n=n/8;
	}
	cout<<sum<<endl;
}
