#include<bits/stdc++.h>
using namespace std;
void bfs(map<int,vector<int> > mp,int root)
{
	map<int,bool> visited;
	stack<int> q;
	q.push(root);
	visited[root]=true;
	while(!q.empty())
	{
		int node=q.top();
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
	
}
