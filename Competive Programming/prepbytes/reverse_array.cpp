#include<bits/stdc++.h>
using namespace std;
void swap(int *i,int *j)
{
	int temp=*i;
		*i=*j;
		*j=temp;
}
int main()
{
	int a[]={1,2,3,4,5};
	int i=0,j=4;
	while(i<j)
	{
		swap(&a[i],&a[j]);
		i++;
		j--;
	}
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	
}
