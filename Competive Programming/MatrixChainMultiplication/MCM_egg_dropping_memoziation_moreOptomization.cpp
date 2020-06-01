#include<bits/stdc++.h>
using namespace std;
static int dp[1001][1001];
int solve(int e,int f)
{
	int low,high;
	if(f==0||f==1)
		return f;
	if(e==0)
		return f;
	if(dp[e][f]!=-1)
		return dp[e][f];
	if(dp[e-1][f-1]!=-1)
		low=dp[e-1][f-1];
	else
	{
		low=solve(e-1,f-1);
		dp[e-1][f-1]=low;
	}
	
	if(dp[e][f-e]!=-1)
		low=dp[e][f-e];
	else
	{
		low=solve(e,f-e);
		dp[e][f-e]=high;
	}
int mn=INT_MAX;

	for(int k=1;k<=f;k++)
	{
		int tmp=1+max(low,high);
		
		mn=min(tmp,mn);
	}
	return mn;
}
int main()
{	memset(dp,-1,sizeof(dp));
	int e,f;
	cin>>f>>e;
	cout<<solve(e,f)<<endl;
}
