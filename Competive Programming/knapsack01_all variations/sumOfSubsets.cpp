#include<bits/stdc++.h>
using namespace std;
string SumOfSubset(vector<int> v,int sum)
{
	int dp[v.size()+1][sum+1];
	for(int i=0;i<v.size()+1;i++){
		for(int j=0; j<sum+1;j++){
			if(j==0)
				dp[i][j]=true;
			else if(j>0 && i==0)
				dp[i][j]=false;
		}
	}
	
	for(int i=1;i<v.size()+1;i++){
		for(int j=1; j<sum+1;j++){
			if(v[i-1]<=j)
			dp[i][j]=(dp[i-1][j-v[i-1]] || dp[i-1][j]);
			else if(v[i-1]>j)
			dp[i][j]=dp[i-1][j];
		}
	}
	
if(dp[v.size()][sum]==true)	
	return "yes";
else
	return "no";
		
}
int main()
{
	vector<int> v(6);
	int sum;
	for(int i=0;i<6;i++)
		cin>>v[i];
	cout<<"sum of subset is :"<<endl;
	cin>>sum;
	cout<<SumOfSubset(v,sum)<<endl;
	
}
