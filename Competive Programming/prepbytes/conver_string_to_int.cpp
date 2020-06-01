#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int p=1,num=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		num=num+(s[i]-'0')*p;
		p*=10;
	}
	cout<<num<<endl;
}
