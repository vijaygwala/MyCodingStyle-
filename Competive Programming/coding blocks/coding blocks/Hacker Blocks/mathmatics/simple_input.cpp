#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,index=0,f=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(sum<0 && f){
				index=i;
				f=0;
			}
		}
	for(int i=0;i<index;i++)
		cout<<a[i]<<endl;
	return 0;
	
}
