#include<bits/stdc++.h> 
using namespace std;
typedef pair<int,int> pp;
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
        
            l++;
            r--;
		}
			
	}
	for(int i=0;i<v.size();i++ )
		cout<<v[i].first<<" and "<<v[i].second<<endl;
	
}
