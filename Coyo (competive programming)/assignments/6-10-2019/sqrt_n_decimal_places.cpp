#include<iostream>
using namespace std;
int sqrt(int);
double pricision(double,int,int);
int main()
{
	int n,pricisions;
	cin>>n>>pricisions;
	
	int k=sqrt(n);
	cout<<pricision(k,pricisions,n)<<endl;
}
double pricision(double res, int precision,int number)
{
	float inc=0.1;
	for(int i=0;i<precision;i++)
	{
		while(res*res<=number)
		{	res+=inc;
		}
		res=res-inc;
		inc = inc/10;
	}
	return res; 
}

int sqrt(int n)
{
	int s=1,l=n,mid,intans;
	while(s<=n)
	{
		mid=(s+l)/2;
		if(mid*mid==n)
		{	intans=mid; break;}
		else if(mid*mid<n)
		{
			if((mid+1)*(mid+1)>n){
				intans=mid; break;}
	
				s=mid-1;
			
		}
		else
		{	if((mid-1)*(mid-1)<n){
					intans=mid; break;}
				l=mid+1;
		}
		
	}
	return intans;
}
