#include<iostream>
using namespace std;
int main()
{
	long long int n,r,sum,t;
	cin>>t;
	while(t--){
	cin>>n;
	sum=0;
	while(n!=0)
	{	r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum%2==0)
	{
		if(sum%4==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else 
	{
		if(sum%3==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
			
	}
}
}
