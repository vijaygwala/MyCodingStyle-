#include<iostream>
using namespace std;
int power(int a,int b);
int main()
{
	int a,b;
	cin>>a>>b;
	
	cout<<power(a,b)<<endl;
}
int power(int a,int b)
{
	if(b==0)
		return 1;
	int p=power(a,b/2);
	if(b%2==0)
		return p*p;
	return p*p*a;
}
