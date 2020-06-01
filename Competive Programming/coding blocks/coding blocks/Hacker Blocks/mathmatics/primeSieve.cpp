#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin>>a>>b;
	bool prime[b+1];
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i<=sqrt(b);i++)
	{
		if(prime[i]==true)
			for(int j=i*i;j<=b;j=j+i)
					prime[j]=false;
	}
	int count=0;
	for(int i=a;i<=b;i++)
		if(prime[i])
			count++;
	cout<<count<<endl;
}
	
}
