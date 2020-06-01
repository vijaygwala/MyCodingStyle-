#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n;
	string s1[n];
	for(int i=0;i<n;i++)
	cin>>s1[i];
	cin>>q;
	string s2[q];
	int count[q]={0};
	for(int i=0;i<q;i++)
	cin>>s2[i];
	for(int i=0;i<q;i++)
	{
		for(int j=0;j<n;j++)
		{if(s2[i]==s1[j])
			count[i]++;
		}
		
	}
	for(int i=0;i<q;i++)
		cout<<count[i]<<" ";
	
	
	
}
