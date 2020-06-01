#include<bits/stdc++.h>
using namespace std;
int main()
{
	int g,n,m,x;
	int count=0;
	int sum=0;
	//cin>>g;
	cin>>n>>m>>x;
	stack<int>s1;
	stack<int>s2;
	for(int i=0;i<n;i++)
	{ int e;
	cin>>e;
	s1.push(e);
	
	}
	for(int i=0;i<m;i++)
	{ int e;
	cin>>e;
	s2.push(e);
	}
	while(s1.empty()==false && s2.empty()==false && sum<=x)
	{
		if(sum+s1.top()>x || sum+s2.top()>x)
			break;
		if(s1.top()<=s2.top())
			{
				sum+=s1.top();
				s1.pop();
				count++;
			}
		else
		{	sum+=s2.top();
				s2.pop();
				count++;
		}
		
		
	}
	cout<<count<<" "<<sum<<endl;
	
}
