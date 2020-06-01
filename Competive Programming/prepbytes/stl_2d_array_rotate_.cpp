#include<bits/stdc++.h>
using namespace std;

void reverse(int a[][4])
{
	for(int i=0;i<4;i++)
	{	int j=0,k=4;
		while(j<k)
		{
			swap(a[i][j],a[i][k]);
			j++;
			k--;
		}
	}
	
}
int main()
{
	int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

		reverse(a);
			
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{	if(i<j)
				swap(a[i][j],a[j][i]);
				
		}
	}

		
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
