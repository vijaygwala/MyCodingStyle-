#include<iostream>
using namespace std;
int sum(int a[],int n)
{if(n==0)
	return 0;
else
	return a[n-1]+sum(a,n-1);
}
int main()
{
	int a[5]={1,2,3,4,5};
	int sumn=sum(a,5);
	cout<<sumn<<endl;
}
