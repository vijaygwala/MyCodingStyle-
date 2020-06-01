#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r;
	cin>>l;
	cin>>r;
	int p=l^r;
	int c=0;
	while(p)
	{	c++;
		p=p>>1;
	}
	
	cout<<(1<<c)-1<<endl;
}
