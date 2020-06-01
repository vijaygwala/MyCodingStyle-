#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,k;
	cin>>q>>k;
	set<int> s;
	while(q--)
	{	
		int t;
		cin>>t;
		if(t==1)
			{	int x,y;
				cin>>x>>y;
				int distance=(x*x)+(y*y);
				s.insert(distance);
				
			}
			else
			{	int l=0;
				for(auto i : s)
				{
					if(l==k-1)
						cout<<i<<endl;
					l++;
				}
			}
	}
	return 0;
}
