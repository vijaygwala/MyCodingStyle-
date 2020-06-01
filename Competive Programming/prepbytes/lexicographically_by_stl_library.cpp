#include<bits/stdc++.h>
using namespace std;
bool comp(string s1,string s2)
{
	if(s1[0]==s2[0])
		return s1.length()>s2.length();
	else
		return s1<s2;
}
int main()
{
	int n;
	cin>>n;
	
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	sort(s,s+n,comp);
	
		for(int i=0;i<n;i++)
		cout<<s[i]<<endl;
	
}
