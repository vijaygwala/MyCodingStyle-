#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int b[5];
	for(int i=0;i<5;i++)
	{
		int k=(5+i-4)%5;
		b[k]=a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
}
