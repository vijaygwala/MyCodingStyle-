#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int flag=1;
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<m;j++)
		{	char ch=a[i][j];
			if(s<k){
				flag=0;
				break;
			}
			
			if(ch=='.')
				s-=2;
			else if(ch=='*')
				s+=5;
			else 
				break;
			
			if(j!=n-1)
				s-=1;
			
		}
		if(flag==0)
			break;
	
	}
	if(flag==0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl<<s<<endl;
		
		}
