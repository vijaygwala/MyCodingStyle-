#include<iostream>
using namespace std;
void bubble_sort(int a[],int size)
{
	for(int i=0;i<size-1;i++)
	{for(int j=0;j<size-i-1;j++)
		{	if(a[j]>a[j+1])
			{int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
		
	}
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
}
int main()
{	int size;
	cout<<"enter the size of array :"<<endl;
	cin>>size;
	int a[size];
	cout<<"enter the elements of array :"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	bubble_sort(a,size);
	
}
