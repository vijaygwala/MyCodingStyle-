#include<bits/stdc++.h>
using namespace std;
string SumOfSubset(vector<int> v,int sum)
{
	bool dp[v.size()+1][sum+1];
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
string EqualSum(vector<int> v)
{int totalsum=0;
	for(int i=0;i<v.size();i++)
		totalsum+=v[i];
	if(totalsum%2!=0)
		return "Not possible";
	if(SumOfSubset(v,totalsum/2)=="yes")
		return "possible";
	else 
		return "Not possible";
}

int main()
{
	vector<int> v(5);
	int sum;
	for(int i=0;i<5;i++)
		cin>>v[i];
	cout<<EqualSum(v)<<endl;
	
}
