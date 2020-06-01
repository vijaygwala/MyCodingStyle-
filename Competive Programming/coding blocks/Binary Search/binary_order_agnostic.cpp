#include<bits/stdc++.h>
using namespace std;
int BinarySearchAsc(int a[],int key)
{
	int start=0,end=4,mid;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==key)
			return mid;
		else if(key<a[mid])
			end=mid-1;
		else
			start=mid+1;
	}
	return -1;
	
}

int BinarySearchDsc(int a[],int key)
{
	int start=0,end=4,mid;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==key)
			return mid;
		else if(key<a[mid])
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
	
}
int main()
{int key;
int a[]={5,4,3,2,1};
cin>>key;
if(a[0]>a[1])
	cout<<BinarySearchDsc(a,key)<<endl;
else
	cout<<BinarySearchAsc(a,key)<<endl;
}
