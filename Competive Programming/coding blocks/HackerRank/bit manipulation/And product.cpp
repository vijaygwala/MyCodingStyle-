#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a,b;
	cin>>a>>b;
	long position=0;
	while(a!=b)
	{
		a=a>>1;
		b=b>>1;
		position++;
	}
	cout<<(a<<position)<<endl;
}
