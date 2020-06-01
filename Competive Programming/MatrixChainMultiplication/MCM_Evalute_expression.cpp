#include<bits/stdc++.h>
using namespace std;

int solve(string s,int i,int j,bool isTrue)
{	
	if(i>j)
		return false;
	if(i==j){
	if(isTrue)
		return s[i]=='T';
	else
		return s[i]=='F';
	}
		int ans=0;
	for(int k=i+1;k<=j-1;k=k+2)
	{
		int lt=solve(s,i,k-1,true);
		int lf=solve(s,i,k-1,false);
		int rt=solve(s,k+1,j,true);
		int rf=solve(s,k+1,j,false);
		if(s[k]=='&')
		{
			if(isTrue)
				ans=ans+lt*rt;
			else
				ans=ans+lf*rt+lt*rf+lf*rf;
		}
			if(s[k]=='|')
		{
			if(isTrue)
				ans=ans+lt*rf+lf*rt+rt*lt;
			else
				ans=ans+lf*rf;;
		}
			if(s[k]=='^')
		{
			if(isTrue)
				ans=ans+lt*rf+lf*rt;
			else
				ans=ans+lf*rf+lt*rt;
		}
		
	
	}
	return ans;
}

int main()
{
	string s="T&F^T|F";
	bool ev=true;
	cout<<solve(s,0,6,ev)<<endl;
	
}
