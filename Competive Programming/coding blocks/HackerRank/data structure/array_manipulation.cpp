#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,q;
	cin>>s>>q;
	vector<int>v(s,0);
	for(int i=0;i<s;i++)
	cin>>v[i];
	int a,b,k;
	while(q--)
	{
		cin>>a>>b>>k;
		for(int i=a;i<=b;i++)
			v[i]+=k;
	}
	int max=*max_element(v.begin(), v.end());
	
	cout<<max<<endl;
}
