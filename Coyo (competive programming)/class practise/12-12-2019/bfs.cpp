#include<bits/stdc++.h>
using namespace std;
void bfs(map<int,vector<int> > mp,int root)
{
	map<int,bool> visited;
	queue<int>q;
	q.push(root);
	visited[root]=true;
	while(!q.empty())
	{
		int node=q.front();
		cout<<node<<" ";
		q.pop();
		for(auto x:mp[node])
		{
			if(!visited[x])
			{
				q.push(x);
				visited[x]=true;
			}
			
		}
	}
}
int main()
{
	int v,e;
	map<int,vector<int>> mp;
	cin>>v>>e;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		mp[x].push_back(y);
		mp[y].push_back(x);
	}
	cout<<"enter the source node :"<<endl;
	int source;
	cin>>source;
	bfs(mp,source);
	
}
