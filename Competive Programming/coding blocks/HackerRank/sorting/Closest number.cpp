#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long a[n],cum[n];
	cum[0]=INT_MAX;
	long min=INT_MAX;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=1;i<n;i++)
	{
		cum[i]=abs(a[i]-a[i-1]);
		
		if(cum[i]<min)
			min=cum[i];
	}
	for(int i=1;i<n;i++)
	{if(cum[i]==min)
		cout<<a[i-1]<<" "<<a[i]<<" ";
	}
	return 0;
}
