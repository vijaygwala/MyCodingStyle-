#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b>a)
	{
		a=b-a;
		b=b-a;
		a=b+a;
	}
	if(a==0)
		return b;
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int a,b;
	cin>>a>>b;
cout<<gcd(a,b)<<endl;
}
