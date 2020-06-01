#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<fun(n,k)<<" ";
	
}
fun(int n,int k)
{
int factorial;
factorial=multiply(n)/((multiply(k))*(multiply(n-k)))
return factorial;

	
}
int multiply(int n)
{
	int multiple=1;
	while(n!=0)
	{
		multiple=multiple*n;
		n--;
		
	}
	return multiple;
}
