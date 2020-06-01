#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int v;
	list<int> *l;
public :
	Graph(int v)
	{
		this->v=v;
		l=new list<int>[v];
	}
	void addEdges(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void print()
	{
		for(int i=0;i<v;i++)
		{
			cout<<"vertex "<<i<<"-> ";
			for(int nbr :l[i])
			{
				cout<<nbr<<",";
			}
			cout<<endl;
		}
	}
};
int main()
{
	Graph g(4);
	g.addEdges(0,1);
	g.addEdges(1,2);
	g.addEdges(2,3);
	g.addEdges(0,2);
	g.print();
	return 0;
	
}
