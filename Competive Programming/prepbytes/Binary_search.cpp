#include<iostream>
using namespace std;
int find(int *a,int s,int e,int key)
{

	while(s<=e)
	{
		int mid=(s+e)/2;
		if(key==a[mid])
			return mid;
	
		else if(a[s]<=a[mid]){
			if(key>=a[s] && key <=a[mid])
				e=mid-1;
			else 
				s=mid+1;
			}
		else {
			if(key>=a[mid] && key<=a[e])
				s=mid+1;
			else 
				e=mid-1;
			}
		
		
	}
return -1;
}
int main()
{
	int a[]={4,3,7,1,5};
	int key=1;
	cout<<find(a,0,4,key)<<endl;
}
