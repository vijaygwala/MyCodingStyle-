#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(prime[i]==true)
			for(int j=i*i;j<=n;j=j+i)
					prime[j]=false;
	}
if(prime[n])
	cout<<"Prime"<<endl;
else
	cout<<"Not Prime"<<endl;	
}
