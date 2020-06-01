#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int flag=1;
	string s,s1,s2;
	cin>>s;
	int len=s.length();
	int mid=len/2;
	for(int i=mid-1;i>=0;i--)
		s1+=s[i];
	for(int i=mid;i<len;i++)
		s2+=s[i];
	for(int i=0;i<s1.length();i++)
	{char left=s1[i];
	char right=s2[i];
		if(left=='(' && right!=')')
			flag=0;
		else if(left=='{' && right!='}')
			flag=0;
		else if(left=='[' && right!=']')
			flag=0;
	}
	cout<<s1<<endl;
	cout<<s2<<endl;
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
}
