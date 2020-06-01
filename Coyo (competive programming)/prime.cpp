#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long primeFactors(long long);
int main()
{
	long long n,sump=0;
	cin>>n;
	int sum=0;
	sump=primeFactors(n);
	while(n!=0)
	{
		int r=n%10;
		sum=sum+r;
		n=n/10; 
	}
	if(sum==sump)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
}
long long primeFactors(long long n)  
{  
	long long sum=0;
    while (n % 2 == 0)  
    {  
        sum=sum+2;  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {    
        while (n % i == 0)  
        {  
            sum=sum+i;  
            n = n/i;  
        }  
    }    
    if (n > 2)  
        sum=sum+n;
	return sum;  
}  

