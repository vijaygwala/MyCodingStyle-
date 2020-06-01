#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &v,int start,int last,int element)
{
	while(start<=last)
	{	
	int mid=start+(last-start)/2;
	if(v[mid]==element)
			return mid;
	if(v[mid]<element)
		start=mid+1;
	else
		last=mid-1; 
		
	}
	return -1;
}
int main()
{
	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	vector<int> v(n);cout<<"enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<"enter the element to be searched:"<<endl;
	int element; cin>>element;
	cout<<binary_search(v,0,n-1,element)<<endl;
	}
