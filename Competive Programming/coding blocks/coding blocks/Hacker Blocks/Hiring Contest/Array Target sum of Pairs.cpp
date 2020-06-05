#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pp;

int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<pp> v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cin>>target;
	sort(a,a+n);
	int l=0,r=n-1;
	while(l<r)
	{
		int sum=a[l]+a[r];
		if(sum<target)
			l++;
		else if (sum>target)
			r--;
		else if(sum==target)
		{
			v.push_back(make_pair(a[l],a[r]));
		}
			
	}
	for(int i=0;i<v.size();i++ )
		cout<<v[i].first<<","<<v[i].second<<endl;
	
}
