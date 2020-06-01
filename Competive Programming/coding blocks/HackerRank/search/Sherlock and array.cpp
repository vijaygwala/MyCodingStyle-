#include<bits/stdc++.h>
using namespace std;
typedef vector<int> ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	int x=0,y=0,sum=0,n,flg=0;
		cin>>n;
	
		ll v(n);
		
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		while(y<n)
		{
			if((2*x)==(sum-v[y])){
				cout<<"yes"<<endl;
				flg=1;
				break;
			}
			x+=v[y];
			y++;
		}
		
		if(!flg)
			cout<<"no"<<endl;
	}
}
