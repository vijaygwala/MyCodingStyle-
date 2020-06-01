#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str = to_string(n);
	int c; cin>>c;
	for(int i=0;i<c;i++)
	{
		char ch='9';
		str[i]+=ch;
	}
	cout<<str<<endl;
}
