#include<bits/stdc++.h>
using namespace std;
int fibbonici(int n);
int dp[1000];

int main()
{
	fill(dp,dp+1000,-1);
dp[0]=0; dp[1]=1;
	int n;
	cin>>n;
	cout<<fibbonici(n)<<" ";
	
}
int fibbonici(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	dp[n]=fibbonici(n-1)+fibbonici(n-2);
	
	return dp[n];
	
}
