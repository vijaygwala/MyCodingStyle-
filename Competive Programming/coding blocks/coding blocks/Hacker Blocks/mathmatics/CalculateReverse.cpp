#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,sum=0;
	cin>>n;
	while(n)
	{
		int r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	cout<<sum<<endl;
}
