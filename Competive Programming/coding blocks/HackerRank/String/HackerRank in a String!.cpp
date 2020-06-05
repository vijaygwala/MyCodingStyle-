#include<bits/stdc++.h>
using namespace std;
string h="hackerrank";
string check(string s)
{	if(s.length()<h.length())
		return "NO";
	
	int j=0;
	for(int i=0;i<s.length();i++)
	{
		if(j<h.length() && s[i]==h[j])
			j++;
		
	}
	if(j==h.length())
		return "YES";
	else 
		return "NO";
}
int main()
{
	
	string s;
	cin>>s;
	cout<<check(s)<<endl;

}
