#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char c;
	int count=0;
	cout<<"enter the string :"<<endl;
	getline(cin,s);
	cout<<"enter the character you want to check occurence :"<<endl;
	cin>>c;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==c)
			count++;
	}
	cout<<count<<" times"<<endl;
}
