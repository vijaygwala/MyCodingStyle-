#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[2*n],k=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c[k++]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		c[k++]=b[i];
	}
	sort(c,c+(2*n));
	int median=((0+(2*n)-1))/2;
	cout<<c[median]<<endl;
	
}
