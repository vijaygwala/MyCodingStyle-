#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
while(t--)
{
	string x,y,ans;
	cin>>x>>y;
	for(int i=0;i<x.length();i++)
	{
		if(x[i]!=y[i])
			ans+="1";
		else
			ans+="0";
		
	}
	cout<<ans<<endl;
}
return 0;
}
