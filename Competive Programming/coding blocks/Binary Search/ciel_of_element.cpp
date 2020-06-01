#include<bits/stdc++.h>
using namespace std;
int BinarySearchAsc(int a[],int key,int start,int end)
{
	int mid,ceil_of;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==key)
			return a[mid];
		
		else if(a[mid]<key)
			start=mid+1;
		else
		{ ceil_of=a[mid];
			end=mid-1;
			
		}
	}
	return ceil_of;
	
}


int main()
{  int key;
   int a[]={1,2,3,4,6,7,8,9};
   	cin>>key;
	cout<<BinarySearchAsc(a,key,0,7)<<endl;
}
