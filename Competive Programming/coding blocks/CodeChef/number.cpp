#include<iostream>
using namespace std;
int main()
{
	int n,k,count=0;
	long long int l;
	cout<<"enter the values :";
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{cout<<"enter the value of l";
	cin>>l;
	if(l%k==0)
	{
		count+=1;
	}
		
	}
	cout<<count;
	
}
