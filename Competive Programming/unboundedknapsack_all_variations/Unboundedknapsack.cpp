#include<bits/stdc++.h>
using namespace std;
int dp[3][101];
int Unboundedknapsack(int weight[],int price[],int mw,int n)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<101;j++)
			if(i==0 || j==0)
				dp[i][j]=0;	
for(int i=1;i<3;i++){
		for(int j=1;j<101;j++){
	if(weight[i-1]<=j)
	 dp[i][j]=max(price[i-1]+dp[i][j-weight[i-1]],dp[i-1][j]);
	else if(weight[i-1]>j)
	 dp[i][j] = dp[i-1][j];
}
}
return dp[n][mw];
		
}
int main()
{
	int weight[5]={1,50};
	int price[5]={1,30};
	int maxweight=100;
	cout<<Unboundedknapsack(weight,price,maxweight,2);
}
