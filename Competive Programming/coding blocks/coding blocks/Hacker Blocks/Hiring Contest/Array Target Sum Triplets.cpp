#include<bits/stdc++.h> 
using namespace std;
typedef pair<int,int> p;
typedef pair<int,p> pp;
int main()
{
	
    int n;
    int target;
    vector<pp> v;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>target;
	
	sort(a,a+n);
	
	for(int i=0;i<n;i++)
	{
		int temptarget=target-a[i];
    	int l=i+1,r=n-1;
	while(l<r)
	{
		int sum=a[l]+a[r];
		if(sum<temptarget)
			l++;
		else if (sum>temptarget)
			r--;
		else if(sum==temptarget)
		{
			v.push_back(make_pair(a[i],make_pair(a[l],a[r])));
        
            l++;
            r--;
		}
			
	}
}
	for(int i=0;i<v.size();i++ )
		cout<<v[i].first<<", "<<v[i].second.first<<" and "<<v[i].second.second<<endl;
	
}
