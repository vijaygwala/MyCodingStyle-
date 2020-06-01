
#include<bits/stdc++.h>
using namespace std;
void printBinaryNumbers(string str,int one,int zero,int n)
{
	if(one+zero==n)
	{
		cout<<str<<" ";
		return;
	}
	if(one<n)
		printBinaryNumbers(str+'1',one+1,zero,n);
	if(one>zero)
		printBinaryNumbers(str+'0',one,zero+1,n);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s="";
		printBinaryNumbers(s,0,0,n);
		cout<<endl;
	}
}
