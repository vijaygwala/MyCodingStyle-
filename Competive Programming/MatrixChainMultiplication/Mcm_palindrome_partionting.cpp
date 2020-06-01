#include<bits/stdc++.h>
using namespace std;
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
{	if(i>=j)
		return 0;
	if(isPalindrome(s,i,j))
	{for(int p=i;p<=j;p++)
		cout<<s[p];
	cout<<endl;
		return 0;
	}
		int min_res=INT_MAX;
	for(int k=i;k<j;k++)
		{
			int temp=MCM(s,i,k)+MCM(s,k+1,j)+1;
			if(temp<min_res)
				min_res=temp;
		}
	return min_res;
	}
int main()
{
	string s="abcba";
	cout<<MCM(s,0,4)<<endl;
	
}
