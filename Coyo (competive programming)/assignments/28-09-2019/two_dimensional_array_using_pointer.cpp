#include<iostream>
using namespace std;
int main()
{	int n,m;
	cout<<"enter the row and columns :"<<endl;
	cin>>n>>m;
	int a[n][m];cout<<"enter the elements of array :"<<endl;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	int *p;
	for (p = &a[0][0] ; p <= &a[n - 1][m - 1]; p++)
               cout<<*p<<endl;
}
		
	
