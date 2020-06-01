#include<iostream>
using namespace std;
void printarray(int *a,int start,int last)
{	if(start>last)
		return ;
	cout<<a[start]<<" ";
	printarray(a,start+1,last);
	}
int main()
{	int t;
	cin>>t;
	while(t--){
int n;
cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	printarray(a,0,n);
		}
	return 0;
	
}
