#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
		for(int round=1;round<=n-1;round++)
		{
			for(int i=0;i<=n-1-round;i++)
			{
				int r=s[i].compare(s[i+1]);
				if(r>0)
					swap(s[i],s[i+1]);
			}
		}
		for(int i=0;i<n;i++)
		cout<<s[i]<<endl;
	
}
