#include<bits/stdc++.h>
using namespace std;
int MinSumOfSubset(vector<int> v)
{		int range=0;
		int mn=100;
	for(int i=0;i<v.size();i++)
		range+=v[i];
	bool dp[v.size()+1][range+1];
	for(int i=0;i<v.size()+1;i++){
		for(int j=0; j<range+1;j++){
			if(j==0)
				dp[i][j]=true;
			else if(j>0 && i==0)
				dp[i][j]=false;
		}
	}
	
	for(int i=1;i<v.size()+1;i++){
		for(int j=1; j<range+1;j++){
			if(v[i-1]<=j)
			dp[i][j]=(dp[i-1][j-v[i-1]] || dp[i-1][j]);
			else if(v[i-1]>j)
			dp[i][j]=dp[i-1][j];
		}
	}
	
	vector<int> s1;
	for(int j=0;j<range/2;j++)
		if(dp[3][j]==true)
			s1.push_back(j);
	for(int i=0;i<s1.size();i++)
		mn=min(mn,range-2*s1[i]);
		
	return mn;
}



int main()
{
	vector<int> v(3);
	int sum;
	for(int i=0;i<3;i++)
		cin>>v[i];
	cout<<MinSumOfSubset(v)<<endl;
	
}
