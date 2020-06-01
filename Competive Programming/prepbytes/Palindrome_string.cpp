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
int main()
{
	string s;
	cin>>s;
	cout<<isPalindrome(s,0,4)<<endl;
	
}
