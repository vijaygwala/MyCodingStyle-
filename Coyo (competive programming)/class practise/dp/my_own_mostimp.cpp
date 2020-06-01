#include<bits/stdc++.h>
using namespace std;
int longest_string(string s);
int main()
{
	string s;
	cin>>s;
	cout<<longest_string(s)<<endl;
	
}
int longest_string(string s)
{
	int n=s.length();
	bool dp[n][n];
	memset(dp,false,sizeof(dp));
	int maxlength=1;
	for(int i=0;i<n;i++)
		dp[i][i]=true;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			dp[i][i+1]=true;
			maxlength=2;
		}
	}
	
	for(int l=3;l<=n;l++)
	{
		for(int i=0;i<=n-l;i++)
		{
			int j=i+l-1;
			if(dp[i+1][j-1] && s[i]==s[j])
			{
				dp[i][j]=true;
				maxlength=l;
			}
		}
	}
	return maxlength;
}
