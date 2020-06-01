#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,hashsize,fm=0,sm=0,tm=0;cout<<"enter the size of the array:"<<endl;
	cin>>n;
	int a[n];cout<<"enter the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	hashsize= *max_element(a,a+n);
	int hash[hashsize+1]={0};
	for(int i=0;i<n;i++)
		hash[a[i]]+=1;
	for(int i=0;i<hashsize+1;i++)
	{
		if(fm<=hash[i])
			{
				tm=sm;
				sm=fm;
				fm=hash[i];
				
			}
		else if(sm<=hash[i])
		{
			tm=sm;
			sm=hash[i];
		}
		else if(tm<=hash[i])
		{
			tm=hash[i];
			
		}
	}
	for(int i=0;i<n;i++)
	{if(hash[a[i]]==fm ){
			cout<<"first maximum frequency element is : "<<a[i]<<endl;
			break;}}
	
	for(int i=0;i<n;i++)
	{
	if(hash[a[i]]==sm )
		{cout<<"second maximum frequency element is : "<<a[i]<<endl;
			break;}}
	for(int i=0;i<n;i++)
	{if(hash[a[i]]==tm && tm>1)
		{cout<<"third maximum frequency element is : "<<a[i]<<endl;
		break;}
	else
		break;}
	}
