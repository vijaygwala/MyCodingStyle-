#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long int ll;
int main()
{
	int n,s;
	cin>>n>>s;
	vector<ll> a(n);
	unordered_map<ll,ll> u_map;
	priority_queue<ll> pq;
	for(int i=0;i<n;i++){
		cin>>a[i];
		u_map[a[i]]=i;
		pq.push(a[i]);
	}
	int sindex;
	for(int i=0;i<n;i++)
	{
		if(pq.top()!=a[i])
		{	s--;
			sindex=u_map[pq.top()];
			swap(a[sindex],a[i]);
			u_map[a[sindex]]=sindex;
			
			
		}
		pq.pop();
		if(s==0)
			break;
		
	}
		

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

