#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int q;
	cin>>q;
	ll primes[]={2,3,5,7,11,13,17,19};
	int pc=(1<<8)-1;
	while(q--)
	{
		ll n,count,res=0;
		cin>>n;
		for(int i=1;i<=pc;i++)
		{
			count=__builtin_popcount(i);
			ll mul=1;
			for(int j=0;j<8;j++)
			{
				if(i&(1<<j))
					mul*=primes[j];
			}
			
			if(count&1)
				res+=n/mul;
			else
				res-=n/mul;
		}
		cout<<res<<endl;
	}
}
