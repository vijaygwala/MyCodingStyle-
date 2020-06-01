#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p=5,res=0;
	cin>>n;
	
	while((n/p)>0)
	{
		res+=n/p;
		p*=5;
	}
	cout<<res<<endl;
}
