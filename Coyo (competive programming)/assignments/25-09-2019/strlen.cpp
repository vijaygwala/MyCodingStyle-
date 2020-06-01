#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char c;
	int count=0,i=0;
	cout<<"enter the string :"<<endl;
	getline(cin,s);
	while(s[i]!='\0')
	{
		count++;
		i++;
	}
	cout<<"length = "<<count<<endl;
}
	
