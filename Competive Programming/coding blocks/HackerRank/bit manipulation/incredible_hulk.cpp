#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,set=0;
	cin>>n;
	while(n>0)
	{
		if(n&1)
			set++;
		n=n>>1;
	}
	cout<<set<<endl;
}
