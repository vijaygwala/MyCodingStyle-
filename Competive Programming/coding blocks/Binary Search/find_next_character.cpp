#include<bits/stdc++.h>
using namespace std;
char BinarySearchAsc(char a[],char key,int start,int end)
{
	int mid;
	char ceil_of;
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
{  char key;
   char a[]={'a','b','c','h','j','o','p','q'};
   	cin>>key;
	cout<<BinarySearchAsc(a,key,0,7)<<endl;
}
