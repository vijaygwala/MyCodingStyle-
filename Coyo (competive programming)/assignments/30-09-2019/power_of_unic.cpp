#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int a,int b,int i,int sum);
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<power(a,b,1,0)<<endl;
}
int power(int x,int n,int i,int sum )
{	if(x==sum)
		return 1;
if(sum>x || pow(i,n)>x)
		return 0;
	
	return power(x,n,i+1,sum+pow(i,n))+power(x,n,i+1,sum);
	}

