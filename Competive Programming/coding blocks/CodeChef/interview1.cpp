#include<iostream>
#include<vector>
#include <iterator> 
#include <map>
using namespace std;
int sockMerchant(int n,vector<int> ar) {
map<int,int> m;
int count=0;
for(int i=0;i<n;i++)
{
	m[ar[i]]=m[ar[i]]+1;
}
map<int,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
	{
		int hp=it->second;
		if(hp%2==0){
			int up=hp/2;
			count=count+up;
		}
	}
	





    
    return count;
}
int main()
{
	vector<int> v(9);
for(int i=0;i<9;i++)
	cin>>v[i];
int p=sockMerchant(9,v);
cout<<p<<endl;	
}
