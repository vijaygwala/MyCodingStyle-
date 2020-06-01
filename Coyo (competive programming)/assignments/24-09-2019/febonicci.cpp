#include<iostream>
#include<bits/stdc++.h>
int fibonicci(int n);
using namespace std;
int main()
{
	int n,result;
	cout<<"enter the nth number :"<<endl;
	cin>>n;
	result=fibonicci(n);
	cout<<n<<"th fibonicci number will be "<<result<<endl;
	
}
int fibonicci(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else if(n==2)
		return 1;
	else 
		return fibonicci(n-1)+fibonicci(n-2);
}
