#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,e;
	cin>>n>>e;
	map<int,vector<int> > m;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		m[x].push_back(y);
		m[y].push_back(x);
		
	}
for(auto x : m)
{
	
	cout<<x.first<<"-->";
	for(auto p:x.second)
	{
		cout<<p<<" ";
	}
	cout<<endl;
	
}

}
