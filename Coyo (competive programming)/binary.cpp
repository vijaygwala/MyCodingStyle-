#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,r,i=1,b=0;
cin>>n;
	while(n!=0)
		{
			r=n%2;
			b=b+r*i;
			i=i*10;
			n=n/2;
		
		}
		cout<<b<<endl;
	
	}
