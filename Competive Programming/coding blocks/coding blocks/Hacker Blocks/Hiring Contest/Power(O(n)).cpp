#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
	if(n==0)
		return 1;
	int subp=power(a,n/2);
	if(n&1)
		return a*subp*subp;
	return subp*subp;
}
int main()
{
	int n,a;
	cin>>a;
	cin>>n;
	cout<<power(a,n)<<endl;
	
}
