#include<iostream>
#include<bits/stdc++.h>
int armstrong(int n,int len);
using namespace std;
int main()
{
	int n;
	cout<<"enter the no : ";
	cin>>n;
	int p=n,len=0;
	while(p!=0)
	{p=p/10;
	len++;
	}
	int number=armstrong(n,len);
	if(number==n)
		cout<<"armstrong"<<endl;
	else
		cout<<"not armstrong"<<endl;
	
}
int armstrong(int n,int len)
{
	if(n==0)
		return 0;
	else 
		return (pow(n%10,len)+armstrong(n/10,len));
}
