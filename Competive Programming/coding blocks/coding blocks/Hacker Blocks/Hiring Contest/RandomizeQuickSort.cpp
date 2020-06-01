#include<bits/stdc++.h>
using namespace std;
void randomIizeSuffle(int a[],int s,int e)
{
	srand(time(NULL));
	for(int i=e;i>0;i--)
	{
		//generate random index
		int j =rand()%(i+1);
		swap(a[i],a[j]);
	}
}
int partion(int a[],int p,int r)
	{
		int x;
		x=a[r];
		int	i=p-1;
		for(int j=p; j<=r-1;j++)
		{
			if(a[j]<=x)
			{
				i=i+1;
				swap(a[i],a[j]);
			}
		}
		swap(a[i+1],a[r]);
		return i+1;
	}
	void quicksort(int a[],int p,int r)
	{
		int q;
		if(p<r)
		{
			q=partion(a,p,r);
			quicksort(a,p,q-1);
			quicksort(a,q+1,r);
		}
	}
	int main()
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		randomIizeSuffle(a,0,n-1);
		quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	}

