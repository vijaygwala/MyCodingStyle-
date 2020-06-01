#include<iostream>
using namespace std;
int search(int a[],int n,int i);
int main()
{
	int a[5]={1,2,3,4,5};
	cout<<search(a,3,0)<<endl;
	
	
}
int search(int a[],int n,int strt,int lst,int size)
{	int mid=strt+lst/2;
	if()
	if(a[mid]<n)
		return search(a,n,0,mid/2,size);
	
	return search(a,n,mid+1,lst,size);
}
