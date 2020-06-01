#include<bits/stdc++.h>
using namespace std;
int BinarySearchAsc(int a[],int key)
{
	int start=0,end=9,mid;
	int res=-1;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==key)
			{
				res=mid;
				end=mid-1;
			}
		else if(key<a[mid])
			end=mid-1;
		else
			start=mid+1;
	}
	return res;
	
}

int BinarySearchDsc(int a[],int key)
{
	int start=0,end=9,mid;
	int res=-1;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==key)
			{
				res=mid;
				start=mid+1;
			}
		else if(key<a[mid])
			start=mid+1;
		else
			end=mid-1;
	}
	return res;
	
}
int main()
{int key;
int a[]={1,2,2,3,3,5,6,6,6,7};
cin>>key;
if(a[0]>a[1])
	cout<<BinarySearchDsc(a,key)<<endl;
else
	cout<<BinarySearchAsc(a,key)<<endl;
}
