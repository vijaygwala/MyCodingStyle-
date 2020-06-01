#include<bits/stdc++.h>
using namespace std;
string findSubset(string s,int i)
{
	string k;
	int pos=0;
	while(i)
	{
		if(i&1)
			k+=s[pos];
		pos++;
		i=i>>1;
		
	}
	return k;
	
}
int main()
{int t;
cin>>t;
while(t--){
	string s;
	cin>>s;
	int subsets=1<<s.length();
	string l[subsets];
	l[0]="";
	for(int  i=1;i<=subsets;i++)
	{
		string k=findSubset(s,i);
		l[i]=k;
	}
	sort(l+1,l+subsets);
	cout<<endl;
	for(int i=1;i<subsets;i++)
		cout<<l[i]<<endl;
}
}
