#include<bits/stdc++.h>
using namespace std;
int BinarySearchAsc(int a[],int key,int start,int end)
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
{  int key;
   int a[]={1,2,3,4,6,7,8,9,10,11,23,25,34,36,37,38,41,42,43,45,50};
   	cin>>key;
   	int start=0,end=1;
   	
   	while(a[end]<key)
   	{	start=end;
   		end*=2;
   		
	   }
	cout<<BinarySearchAsc(a,key,start,end)<<endl;
}
