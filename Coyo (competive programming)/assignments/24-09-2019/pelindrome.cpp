#include<iostream>
#include<bits/stdc++.h>
int reverse(int n);
bool ispelindrome(int n);
using namespace std;

int main()
{
	int n;
	cout<<"enter the number :"<<endl;
	cin>>n;
	
	cout<<ispelindrome(n)<<endl;

	
}
bool ispelindrome(int n)
{
	if(n==reverse(n))
		return true;
	else
		return false;
}
int reverse(int n)
{int p=n,len=0;
	while(p!=0)
	{
	p=p/10;
	len++;
	}
	
	if(n>0)
		return ((n%10*pow(10,len-1))+reverse(n/10));
	else
		return 0;
	
}
