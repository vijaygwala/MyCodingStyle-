#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		map<char,int> a;
		map<char,int> b;
		cin>>s;
		int len=s.length();
		if(len%2!=0)
			cout<<"-1"<<endl;
		else
		{
			for(int i=0;i<s.length();i++)
			{
				if(i<(len/2))
					a[s[i]]+=1;
				else
					b[s[i]]+=1;
			}
			int diff=0;
			for(int i=len/2;i<len;i++)
				{
					if(a.find(s[i])!=a.end())
					if(b[s[i]]>a[s[i]])
						diff+=b[s[i]]-a[s[i]];
				
				}
			cout<<diff<<endl;
					
			
		}
	}
}
