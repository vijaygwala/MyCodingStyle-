#include<bits/stdc++.h>
using namespace std;
string LCS(string x,string y,int n,int m)
{	int dp[n+1][m+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++)
		{
	if(x[i-1]==y[j-1])
		dp[i][j]=1+dp[i-1][j-1];
	else
		dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
	}}
	int i=n,j=m;
	string s;
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
			{	s+=x[i-1];
				i--;
				j--;
				
			}
		else {
		if(dp[i-1][j]>dp[i][j-1]){
				s+=x[i-1];
				i--;}
		else
		{
			s+=y[j-1];
			j--;
		}
		}
	}
	
	while(i>0)
	{
		s+=x[i-1];
		i--;
	}
		while(j>0)
	{
		s+=y[j-1];
		j--;
	}
	reverse(s.begin(),s.end());
return s;
	
}
int main()
{
	string x,y;
	cin>>x;
	cin>>y;
	cout<<LCS(x,y,x.length(),y.length())<<endl;
}
