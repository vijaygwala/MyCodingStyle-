#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int flag=1,flag2=1;
	string s;
	cin>>s;
	int hash[26]={0};
	for(int i=0;i<s.length();i++)
			hash[s[i]-'a']+=1;
	for(int i=0;i<s.length();i++)
	{
		if(hash[s[i]-'a']>2)
			cout<<"No"<<endl;
		if(hash[s[i]-'a']==2 && flag==1)
			{
				hash[s[i]-'a']-=1;
				flag=0;
			}
	}
	for(int i=0;i<s.length();i++)
		if(hash[s[i]-'a']==2)
			flag2=0;
	if(flag2==0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;}
