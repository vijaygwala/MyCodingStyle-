#include<bits/stdc++.h>
using namespace std;
int MCM(int *a,int i,int j)
{	if(i>=j)
	return 0;

	int min_res=INT_MAX;
	for(int k=i;k<=j-1;k++)
		{
			int temp=MCM(a,i,k)+MCM(a,k+1,j)+a[i-1]*a[k]*a[j];
			if(temp<min_res)
				min_res=temp;
		}
	return min_res;
	}
int main()
{
	int a[]={40,20,30,10,30};
	cout<<MCM(a,1,4);
	
}
