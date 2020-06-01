#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n],b[m];
	vector<int> v;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int p=n-1,q=m-1,c=0;
	while(p>=0 && q>=0)
	{
		
		int cd=a[p]+b[q];
		if(c>0){
			cd=cd+c;
			c=0;
		}
		if(cd/10){
			c=cd/10;
			cd=cd%10;
		}
		
		v.push_back(cd);
		p--;
		q--;
	}
	while(p>=0)
	{
		v.push_back(a[p]);
		p--;	
	}
	while(q>=0)
	{
		v.push_back(b[q]);
		q--;
	}
	for(int i=v.size()-1;i>=0;i--)
		cout<<v[i]<<",";
	
}
