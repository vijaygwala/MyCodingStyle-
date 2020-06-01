#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vl;
int main()
{
	int t,index1,index2;
	cin>>t;
	while(t--)
	{
		int n,m;
		map<int,int> mp;
		cin>>m;
		cin>>n;
		vl v(n);
		for(int i=0;i<n;i++)
				cin>>v[i];
		
		for(int i=0;i<n;i++)
		{
		
			int y=m-v[i];
			
			if (mp.find(y) != mp.end()) {
				index1=mp[y]+1;
				index2=i+1;
				break;
			}
		
				mp[v[i]]=i;
	}
		
		cout<<index1<<" "<<index2<<endl;
		
			
			}
			return 0;
}
