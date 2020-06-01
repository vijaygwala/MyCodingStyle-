#include<bits/stdc++.h>
using namespace std;
int CoinSum(int *coin,int sum)
{
	int dp[4][sum+1];
	for(int i=0;i<4;i++){
		for(int j=0;j<sum+1;j++)
		{
			if(i==0)
				dp[i][j]=0;
			else if(i>0 && j==0)
				dp[i][j]=1;
			}
	}
	
		for(int i=1;i<4;i++){
		for(int j=1;j<sum+1;j++)
		{
			if(coin[i-1]<=j)
				dp[i][j]=dp[i][j-coin[i-1]]+dp[i-1][j];
			else if(coin[i-1]>j)
				dp[i][j]=dp[i-1][j];
		}
	}
}
int main()
{
	int a[]={1,2,3};
	int sum=10;
	cout<<CoinSum(a,sum)<<endl;
}
