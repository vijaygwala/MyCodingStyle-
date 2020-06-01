#include<iostream>
using namespace std;
 void insertion_sort(int a[],int size)
{	int key,j;
	for(int i=1;i<size;i++)
	{	key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=key;
		
	}
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";}
int main()
{	int size;
	cout<<"enter the size of array :"<<endl;
	cin>>size;
	int a[size];
	cout<<"enter the elements of array :"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	insertion_sort(a,size);}

