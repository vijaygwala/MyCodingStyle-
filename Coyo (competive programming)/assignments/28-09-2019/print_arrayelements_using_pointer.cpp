#include<iostream>
using namespace std;
int main()
{	int n;cout<<"enter the size of array:"<<endl;
	cin>>n;cout<<"enter the elements of array:"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int *p;
	p=&a[0];
	cout<<"First trick :"<<endl;
	while(p!=&a[n]){
		cout<<*p<<endl;
		p++;}
	cout<<"Second trick"<<endl;
	for( p=a;p<a+n;p++ )
		cout<<*p<<endl;
	
}
