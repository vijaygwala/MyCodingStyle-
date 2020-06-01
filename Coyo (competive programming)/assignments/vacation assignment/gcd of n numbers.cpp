#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
		return b;
	gcd(b%a,a);
}
int main()
{
	int n,result;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	result=a[0];
	for(int i=1;i<n;i++)
	{
		result=gcd(a[i],result);
	}
	cout<<result<<endl;
}
