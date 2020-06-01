#include<bits/stdc++.h>
using namespace std;
map<int,vector<pair<int,int> > mp
int main()
{
	int v,e;
	cin>>v>>e;
	while(e--)
	{
		int a,b,d; bool c;
		cin>>a>>b>>c>>d;
		mp[a].push_back(make_pair(a,d));
		if(c==false)
		{
			mp[b].push_back(make_pair(a,d));
		}
	}
	int x;
	cin>>x;
	for(auto y: mp[x])
	{
		cout<<y.first<<endl;
		
	}
	
}

