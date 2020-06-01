#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int count=__builtin_popcount(n);
		cout<<count<<endl;
	}
}
