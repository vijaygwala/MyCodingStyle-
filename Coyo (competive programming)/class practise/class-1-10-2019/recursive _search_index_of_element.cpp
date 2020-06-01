#include<iostream>
using namespace std;
int search(int a[],int n,int i,int size);
int main()
{int n;
cout<<"enter the size of the array"<<endl;
cin>>n;
int a[n]; cout<<"enter the elements of the array :"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter the element whose index to be found :"<<endl;
int element; cin>>element;
cout<<search(a,element,0,n)<<endl;
	}
int search(int a[],int n,int i,int size)
{	
	if(i==size)
		return -1;
	if(a[i]==n)
		return i;
	
	return search(a,n,i+1,size);
}
