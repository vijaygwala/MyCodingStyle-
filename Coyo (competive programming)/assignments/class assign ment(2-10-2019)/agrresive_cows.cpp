#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool binary_search(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        
        if (arr[m] == x) 
            return true; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
  
    return false; 
} 
void cows(int a[],int c,int size)
{
	int fmin=*min_element(a,a+size);
	int max=*max_element(a,a+size);
	int place=1,smin=fmin;
	
	for(int i=fmin+1;i<=max;i++)
		{	if (binary_search(a,0,size-1, i))
			{	if(i-fmin>=c && i-smin>1)
				{	smin=i;
					place++;
				}
			}
		}
	cout<<place<<endl;
	
}
int main()
{int t;
cin>>t;
	while(t--)
	{int n,c;
	cin>>n>>c;
	int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
			sort(a,a+n);
			cows(a,c,n);
	}
	
}
