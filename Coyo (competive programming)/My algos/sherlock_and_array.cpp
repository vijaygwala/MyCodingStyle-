#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={3,7,5,10,2,7,4,2};
	int sum=40;
	int x=0,y;
	for(int i=1;i<8;i++)
	{
		y=a[i];
		x+=a[i-1];
		if(2*x==(40-y))
			break;
		
	}
	cout<<y<<endl;
}
