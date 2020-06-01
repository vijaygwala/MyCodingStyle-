#include<iostream>
using namespace std;
int sum(int *a,int n)
{if(n==0)
	return 0;
else
	return a[n-1]+sum(a,n-1);
}
int main()
{	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	int a[n];cout<<"enter the elemnts of array:"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int sumn=sum(a,n);
	cout<<sumn<<endl;
}
