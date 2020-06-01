#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int v;
	unordered_map<string,list<pair<string,int>>> l;
public :

	void addEdges(int x,int y,bool bi,int wt)
	{
		l[x].push_back(make_pair(y,wt));
		if(bi)
		l[y].push_back(make_pair(x,wt));
	}
	void print()
	{
		for(auto p: l)
		{
			string city=p.first;
			list<string,int> nbrs=p.second;
				cout<<city<<" -> ";
			for(auto nbr:nbrs)
			{
				string dest=nbr.first;
				int dist=nbr.second;
				cout<<"("<<dest<<","<<dist<<")"<<" ,";
			
			}
			cout<<endl;
		}
	}
};
int main()
{
	Graph g;
	g.addEdges(0,1,true,23);
	g.addEdges(1,2,true,39);
	g.addEdges(2,3,true,34);
	g.addEdges(0,2,true,32);
	g.print();
	return 0;
	
}
