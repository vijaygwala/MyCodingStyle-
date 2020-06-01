#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%2 ==0 && i>2)
			{
				if(j==1)
					cout<<"1"<<" ";
				
				else if(j==i)
					cout<<"1"<<" ";
				else
					cout<<"0"<<" ";
			}
			else
				cout<<"1"<<" ";
		}
		cout<<endl;
	}
}
