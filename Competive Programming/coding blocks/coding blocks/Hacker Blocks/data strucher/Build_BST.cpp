#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> p;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int no;
			cin>>no;
			p.push(no);
		}
		long sum=0;
	while(!p.empty())
	{cout<<p.top()<<" ";
	p.pop();
		
	}	
	
}
