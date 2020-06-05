#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	long long b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(int i=0;i<n;i++){
		
	
		 if(a[i%n]<=a[(i+1)%n])
		{
			b[i%n]=a[(i+1)%n];
		}
		else
			b[i%n]=-1;
		}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
		
}
