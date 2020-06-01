#include<bits/stdc++.h>
using namespace std;

bool solve(string a,string b)
{	
int aLen=a.length();
int bLen=b.length();
if(a.compare(b)==0)
	return true;
	if(aLen!=bLen)
		return false;
	if(aLen<=1)
		return false;
int n=a.length();
bool flag=false;
for(int i=1;i<=n-1;i++)
{
	if(((solve(a.substr(0,i),b.substr(n-i,i))==true)&& (solve(a.substr(i,n-i),b.substr(0,n-i))==true)||((solve(a.substr(0,i),b.substr(0,i))==true)&&(solve(a.substr(i,n-i),b.substr(i,n-i))==true))))
		{
			flag=true;
			break;
		}
}
	
	return flag;
}

int main()
{
	string a,b;
	cin>>a;
	cin>>b;

	cout<<solve(a,b)<<endl;
	
}
