#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	priority_queue<int> pq;
	for(int i=0;i<n;i++)
	{
		int item;
		cin>>item;
		pq.push(item);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<"END"<<endl;
}
