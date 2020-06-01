#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	int xorr=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		xorr^=a[i];
	}
	cout<<xorr<<endl;
	return 0;
}
