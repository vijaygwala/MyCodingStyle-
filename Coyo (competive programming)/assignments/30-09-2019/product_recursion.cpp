#include<iostream>
using namespace std;
int product(int a[],int n);
int main()
{int n;
cout<<"enter the size of the array"<<endl;
cin>>n;
int a[n]; cout<<"enter the elements of the array :"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<product(a,n)<<endl;
}
int product(int a[],int n)
{
	if(n==0)
		return 1;
	else 
		return a[n-1]*product(a,n-1);
	
}
