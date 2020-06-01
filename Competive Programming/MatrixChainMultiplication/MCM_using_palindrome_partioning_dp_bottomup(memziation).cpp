#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
bool isPalindrome(string s,int i,int j)
{
	if(i==j)
		return true;
	if(i>j)
		return true;
	while(i<j)
	{
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	
	return true;
}
int MCM(string s,int i,int j)
{	
	if(i>=j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(isPalindrome(s,i,j))
		return 0;
		int mn=INT_MAX;
	for(int k=i;k<j;k++)
	{
		int temp=MCM(s,i,k)+MCM(s,k+1,j);
		
		if(temp<mn)
			mn=temp;
	}
	return dp[i][j]=mn;
}

int main()
{	memset(dp,-1,sizeof(dp));
	string s="nitik";
	cout<<MCM(s,0,4)<<endl;
	
}
