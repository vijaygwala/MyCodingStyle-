#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,hashsize;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	hashsize= *max_element(a,a+n);
	int hash[hashsize+1]={0};
	for(int i=0;i<n;i++)
		hash[a[i]]+=1;
	int p=*max_element(hash,hash+(hashsize+1));
	for(int i=0;i<n;i++)
	{if(hash[a[i]]==p)
		{cout<<a[i]<<endl;
			break;
		}
		}
		}
