#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
	if(s1[0]==s2[0])
	{
		if(s1.length()<s2.length())
		{
			if(s1==s2.substr(0,s1.length()))
				return false;
		}
		else
		{
			if(s2==s1.substr(0,s2.length()))
				return true;
			
		}
	}
	
	return s1<s2;
	
	
	
}
int main()
{	int n;
	cin>>n;
	string s[n+1];
	for(int i=0;i<n+1;i++)
		getline(cin,s[i]);
	sort(s,s+n+1,compare);
	for(int i=0;i<n+1;i++)
		cout<<s[i]<<endl;
}
