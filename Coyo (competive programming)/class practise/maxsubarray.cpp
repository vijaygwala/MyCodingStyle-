#include<iostream>
using namespace std;
int main()
{
	int a[6]={6,-2,4,5,-7};
	int sum=0,j=0;
	int collect[6];
	
	for(int i=0;i<6;i++)
	{	sum=0;
		while(a[i]>0)
		{
			sum=sum+a[i];
		}
		collect[j++]=sum;
		
	}
	for(int i=0;i<6;i++)
		cout<<collect[i]<<endl;
		
	
}
