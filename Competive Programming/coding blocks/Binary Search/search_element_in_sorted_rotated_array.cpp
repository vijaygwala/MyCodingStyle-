#include<bits/stdc++.h>
using namespace std;
int BinarySearchAsc(int a[])
{
	int start=0,end=7,mid;
	int next,prev;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		next=(mid+1)%8;
		prev=(mid+8-1)%8;
		if(a[mid]<=a[prev] && a[mid]<=a[next])
			return mid;
		
		 if(a[start]<=a[mid])
			start=mid+1;
		else if(a[end]<=a[mid])
			end=mid-1;
	}
	return -1;
	
}

int BinarySearch(int a[],int key,int start,int end)
{
	
	while(start<=end)
	{
		int mid=start+(end-start)/2;
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
int a[]={11,12,15,18,2,5,6,8};

cin>>key;

	int min = BinarySearchAsc(a);
	cout<<min<<endl;

	int res1=BinarySearch(a,key,0,min-1);
	int res2=BinarySearch(a,key,min,7);
	
	if(res1>=0)
		cout<<res1<<endl;
	else if(res2>=0)
		cout<<res2<<endl;
	else
		cout<<"Nahi mila :-( !"<<endl;	
		

}

