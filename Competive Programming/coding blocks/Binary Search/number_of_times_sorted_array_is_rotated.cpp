#include<bits/stdc++.h>
using namespace std;
int BinarySearchAsc(int a[])
{
	int start=0,end=9,mid;
	int next,prev;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		next=(mid+1)%10;
		prev=(mid+10-1)%10;
		if(a[mid]<=a[prev] && a[mid]<=a[next])
			return mid;
		
		if(a[start]<=a[mid])
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
	
}
int main()
{int key;
int a[]={11,12,15,18,1,3,6,8};


	cout<<BinarySearchAsc(a)<<endl;

}

