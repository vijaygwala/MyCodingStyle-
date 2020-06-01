#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,add_string;
	cout<<"enter the string :"<<endl;
	getline(cin,s);
	cout<<"enter the string to you want to append :"<<endl;
	getline(cin,add_string);
	
	s+=add_string;
	cout<<s<<endl;
}


