#include<iostream>
#include<string>

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
	if(s[i]>='a' && s[i]<='z')
	
		continue;
	else
	sum+=s[i]-'0';
}
cout<<sum<<endl;
}
	
	
	
	

