#include<iostream>
using namespace std;
int main()
{
	int n,b=0,r,i=1;
	cin>>n;
	while(n!=0)
	{
		r=n%2;
		b=b+r*i;
		i*=10;
		n=n/2;
	}
	
	cout<<s<<endl;
	
}
