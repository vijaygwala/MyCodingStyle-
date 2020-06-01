#include<iostream>
using namespace std;
int main()
{
	long long n,xorr=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		{
			xorr=xorr^a[i];
		
		}
	cout<<xorr<<endl;
}
