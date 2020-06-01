#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<fun(s)<<endl;
}
fun(string s)
{
	int n=s.length();
	bool dp[n][n];
	memset(dp,false,sizeof(dp));
	int max_length=1;
	for(int i=0;i<n;i++)
		dp[i][i]=true;
	
	
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			dp[i][i+1]=true;
			max_length=2;
		}
	}
	
	for(int l=3;l<=n;l++)
	{
		for(int i=0;i<n-l+1;i++)
		{
			int j=i+l-1;
			if(dp[i+1][j-1] && s[i]==[j])
			{
				dp[i][j]=true;
				max_length=l;
			}
		}
	}
	return max_length;
}
