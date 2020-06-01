#include<bits/stdc++.h>
using namespace std;
string FindMinSubstring(string s,string k)
{
	map<char,int> mp;
	for(int i=0;i<k.length();i++)
		mp[k[i]]+=1;
	int i=0,j=0,l=0,r=0,missing=k.length();
	while(r<s.length())
	{
		if(mp[s[r]]>0)
			missing--;
			mp[s[r]]-=1;
			r++;
			while(missing==0)
			{
				if(j==0 || (j-i )> (r-l))
				{
					i=l;
					j=r;
				}
				mp[s[l]]+=1;
				if(mp[s[l]]>0)
					missing++;
				l+=1;
			}
	}
	cout<<i<<" "<<j<<endl;
	return s.substr(i,j);
}
int main()
{
string s;
string k;
getline(cin,s);
cin>>k;
cout<<FindMinSubstring(s,k)<<endl;
}
