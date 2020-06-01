#include<bits/stdc++.h>
using namespace std;
int dp[6][14];
int knapsack(int weight[],int price[],int mw,int n)
{
	for(int i=0;i<6;i++)
		for(int j=0;j<14;j++)
			if(i==0 || j==0)
				dp[i][j]=0;	
for(int i=1;i<6;i++){
		for(int j=1;j<14;j++){
	if(weight[i-1]<=j)
	 dp[i][j]=max(price[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
	else if(weight[i-1]>j)
	 dp[i][j] = dp[i-1][j];
}
}
return dp[n][mw];
		
}
int main()
{
	int weight[5]={4,10,2,3,7};
	int price[5]={10,4,3,9,2};
	int maxweight=13;
	cout<<knapsack(weight,price,maxweight,5);
}
