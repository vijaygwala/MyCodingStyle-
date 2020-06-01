#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,k;
	cin>>s;
	
	map<char,int> mp;
	for(int i=0;i<s.length();i++)
	{
		mp[s[i]]+=1;
	}
    k="";
	for(auto it=mp.begin();it!=mp.end();it++)
		{
			if((it->second)%2)
				k+=it->first;
			
		}
        if(k=="")
        cout<<"Empty String"<<endl;
        else
		cout<<k<<endl;
}
