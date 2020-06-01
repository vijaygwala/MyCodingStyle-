#include<bits/stdc++.h>
using namespace std;
int fun(int n);
int dp[1000];

int main()
{

	fill(dp,dp+1000,-1);
	dp[0]=0; dp[1]=1;
	int n;
	cin>>n;
	cout<<fun(n)<<endl;
	
	
}
 int fun(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	dp[n]=fun(n-1)*n;
	
	return dp[n];
	
}
