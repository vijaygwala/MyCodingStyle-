#include<bits/stdc++.h>
using namespace std;
set<string> st;
int count=0;
void permute(string s,int l,int r)
{
	if(l==r){
		st.insert(s);
		count++;
	}
	for(int i=l;i<=r;i++)
	{
		swap(s[l],s[i]);
		permute(s,l+1,r);
		swap(s[l],s[i]);
	}
}
int main()
{
	string s;
	cin>>s;
	permute(s,0,s.length()-1);
	for(string k:st)
		cout<<k<<" ";
}
