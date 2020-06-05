#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int p=1;
	int no=a[0];
	b[0]=p;
	for(int i=0;i<n;i++)
	{
		b[i]=1;
		for(int j=i-1;(j >= 0) &&(a[i] >= a[j]); j--)
							b[i]++;	
	}

	
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<"END"<<endl;
}
