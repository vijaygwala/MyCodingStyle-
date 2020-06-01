#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int camel=1;
	for(int i=0;i<s.length();i++)
	{
		char c=s[i];
		if(c>=65 && c<=90)
			camel++;
			}
	cout<<camel<<endl;
}
