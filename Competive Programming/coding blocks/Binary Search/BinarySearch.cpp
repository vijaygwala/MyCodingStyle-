#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int key,int start,int end)
{
	int mid;
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


int main()
{int key;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
	cin>>a[i];
cin>>key;

cout<<BinarySearch(a,key,0,n-1)<<endl;
}
