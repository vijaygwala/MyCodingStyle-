#include<bits/stdc++.h>
using namespace std;
static int dp[1001][1001];
int solve(int e,int f)
{
	if(f==0||f==1)
		return f;
	if(e==0)
		return f;
	if(dp[e][f]!=-1)
		return dp[e][f];
int mn=INT_MAX;

	for(int k=1;k<=f;k++)
	{
		int tmp=1+max(solve(e-1,k-1),solve(e,f-k));
		
		mn=min(tmp,mn);
	}
	return dp[e][f]=mn;
}
int main()
{	memset(dp,-1,sizeof(dp));
	int e,f;
	cin>>f>>e;
	cout<<solve(e,f)<<endl;
}
