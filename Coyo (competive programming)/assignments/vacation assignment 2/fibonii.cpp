#include<iostream>
using namespace std;
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
int main()
{
	int n,m;
	cin>>n>>m;
	long long sum=0;
	for(int i=n;i<=m;i++)
		sum=sum+fib(i);
	cout<<sum%1000000007<<endl;
	
		

}
