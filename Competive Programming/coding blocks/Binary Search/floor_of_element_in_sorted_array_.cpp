#include<bits/stdc++.h>
using namespace std;
BinarySearchAsc(int a[],int key,int start,int end)
{
	int mid,min;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==key)
			return mid;
		if(a[mid]<key)
			min=mid;
		
		else if(key<a[mid])
			end=mid-1;
		else
			start=mid+1;
	}
	return min;
	
}


int main()
{  int key;
   int a[]={1,2,3,4,6,7,8,9};
   	cin>>key;
	cout<<BinarySearchAsc(a,key,0,7)<<endl;
}
