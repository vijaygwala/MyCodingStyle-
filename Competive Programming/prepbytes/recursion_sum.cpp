#include<bits/stdc++.h>
using namespace std;
int count(long n)
{
	if(n==0)
		return 0;
	long sum =n%10+count(n/10);
	if(sum/10)
		sum=count(sum);
	
	return sum;
}
long long expo(int a,int n)
{
	long long res=1;
	while(n>0)
	{
		if(n&1)
			res=res*a;
		a=a*a;
		n=n>>1;
	}
	return res;
}

int main()
{
	long long n,k,no,len=0;
	cin>>n>>k;
	no=n;
	while(no)
	{
		len++;
		no=no/10;
	}
	no=n;
	long long t=expo(10,len);
	while(k>1)
	{
		no=n+no*t;
		k--;
	}
	cout<<count(no)<<endl;
}


