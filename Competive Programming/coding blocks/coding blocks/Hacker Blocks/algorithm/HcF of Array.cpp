#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b>a)
	{
		a=b-a;
		b=b-a;
		a=b+a;
	}
	if(a==0)
		return b;
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int n,gcdd;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		gcdd=a[0];
	for(int i=1;i<n;i++)
		gcdd=gcd(gcdd,a[i]);
	cout<<gcdd<<endl;
}
