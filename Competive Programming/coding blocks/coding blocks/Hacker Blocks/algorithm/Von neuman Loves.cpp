#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,res=0;
		cin>>n;
		int pos=0;
		while(n)
		{
			int d=n%10;
			if(d)
				res+=(1<<pos);
			pos++;
			n=n/10;
		}
		cout<<res<<endl;
		
	}
}
