#include<bits/stdc++.h>
using namespace std;
template<typename,T>
class Graph
{
	map<T,list<int>> l;
	
	public:
		public void addEdges(int x,int y)
		{
			l[x].push_back(y);
			l[y].push_back(x);
		}
		public void bfs(T src)
		{
			map<T,int> visited;
			queue<int> q;
			q.push(src);
			visited[src]=true;
			while(!q.empty())
			{
				T node = q.front();
				q.pop();
				cout<<node<<" ";
				for(int nbr:l[node])
					{
						if(!visited[nbr])
							q.push(nbr);
							visited[nbr]=true;
					}
				
				
			}
		}
}
int main()
{
	
}
