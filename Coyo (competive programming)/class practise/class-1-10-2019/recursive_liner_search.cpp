#include<iostream>
using namespace std;
bool search(int a[],int n,int i);
int main()
{
	int a[5]={1,2,3,4,5};
	cout<<search(a,3,0)<<endl;
	
	
}
bool search(int a[],int n,int i)
{	
	if(i==n)
		return false;
	if(a[i]==n)
		return true;
	
	return search(a,n,i+1);
}
