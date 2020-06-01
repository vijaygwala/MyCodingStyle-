#include<bits/stdc++.h>
using namespace std;
int main() {
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		int count=0;
		for(int i=a;i<=b;i++)
		{
			count+=__builtin_popcount(i);
		}
		cout<<count<<endl;
	}
	return 0;
}
