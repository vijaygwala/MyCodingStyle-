#include<bits/stdc++.h>
using namespace std;
int CoinChange_min_ways(int coin[],int sum)
{
	int dp[4+1][sum+1];
	
	for(int i=0;i<5;i++){
	for(int j=0;j<sum+1;j++){
		if(i==0)
			dp[i][j]=INT_MAX-1;
		if(j==0 && i>0)
			dp[i][j]=0;
		if(i==1 && j>0)
			{if(j%coin[0]==0)
				dp[i][j]=1;
			else
				dp[i][j]=INT_MAX-1;
			}
	}
}
	
		for(int i=2;i<5;i++){
	for(int j=1;j<sum+1;j++){
		if(coin[i-1]<=j)
			dp[i][j]=min(1+dp[i][j-coin[i-1]],dp[i-1][j]);
		else if(coin[i-1]>j)
			dp[i][j]=dp[i-1][j];
	}
}

return dp[4][sum];

}
int main()
{
	int coin[4]={3,4,5,1};
	int sum=9;
	cout<<CoinChange_min_ways(coin,sum)<<endl;
}
