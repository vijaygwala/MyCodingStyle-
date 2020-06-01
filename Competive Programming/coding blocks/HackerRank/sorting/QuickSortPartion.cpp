#include<bits/stdc++.h>
using namespace std;

void partion(int a[],int p,int r)
	{
		vector<int> left;
		vector<int> right;
		for(int i=0;i<=r;i++)
		{
			if(a[i]>=a[0])
				right.push_back(a[i]);
			else
				left.push_back(a[i]);
		}
		for(int i=0;i<left.size();i++)
			cout<<left[i]<<" ";
		for(int i=0;i<right.size();i++)
			cout<<right[i]<<" ";
	}

	int main()
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
	
		partion(a,0,n-1);
	}
		


