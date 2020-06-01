#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int hash1[26]={0},hash2[26]={0};
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.length();i++)
	{	char c=s1[i];
		if(65<=c && c<=98)
			hash1[c-'A']+=1;
		else
			hash1[c-'a']+=1;
	}
	for(int i=0;i<s2.length();i++)
	{
		hash2[s2[i]-'A']+=1;
	}
	for(int i=0;i<26;i++)
	{
	cout<<hash1[i]<<" ";
	cout<<hash2[i]<<" ";
	}
	
}

