#include<iostream>
using namespace std;
int max(int a,int b);
int main()
{
	int sum=0,maxi=INT_MIN , max_value=INT_MIN;
	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		sum=max(sum+a[i],0);
		maxi=max(sum,maxi);
		max_value=max(max_value,a[i]);
	}
	if(maxi==0)
		cout<<max_value<<endl;
	else
		cout<<maxi<<endl;
	
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
