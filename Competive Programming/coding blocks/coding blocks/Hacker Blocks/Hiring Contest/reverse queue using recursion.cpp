#include<bits/stdc++.h>
using namespace std;
void reverse(int *a,int n)
{
	if(n==0){
		cout<<a[0]<<" ";
		return;
	}
	cout<<a[n]<<" ";
	reverse(a,n-1);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	reverse(a,n-1);
	cout<<"END"<<endl;
}
