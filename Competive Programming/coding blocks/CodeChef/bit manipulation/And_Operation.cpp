#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	long long int res=0;
	for(int i=31;i>=0;i--)
	{
		vector<int> tmp;
		for(int j=0;j<v.size();j++)
		{
			if((v[j]&(1<<i)))
				tmp.push_back(v[j]);
			
			
		}
		if(tmp.size()>=2)
		{res+=(1<<i);
			v=tmp;
		}
			
	}
	cout<<res<<endl;
}
