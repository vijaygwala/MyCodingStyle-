#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[1001],freq[1001];
	memset(freq,0,1001);
	int n,sum=0,res=0;
	freq[0]=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		sum%=n;
		sum=(sum+n)%n;
		freq[sum]++;
	}
	for(int i=0;i<n;i++)
	{
		int r=freq[i];
		res+=r*(r-1)/2;
		
	}
	cout<<res<<endl;
}
