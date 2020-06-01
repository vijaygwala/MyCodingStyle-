#include<bits/stdc++.h>
using namespace std;
typedef map<int,int> mp;
int main()
{
	int n,m;
	mp fa;
	mp fb;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		fa[a[i]]+=1;
	}
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
		fb[b[i]]+=1;
	}
for(int v : fb)
{	
	if(v.second!=fa[v.first])
		cout<<v.second<<" ";
	
}	
		

}
