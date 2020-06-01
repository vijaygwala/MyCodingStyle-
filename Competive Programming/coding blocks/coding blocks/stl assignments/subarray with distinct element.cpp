#include<bits/stdc++.h>
using namespace std;
int countSetbit(int i)
{
	int bit=0;
	while(i)
	{
		if(i&1)
			bit++;
		i=i>>1;
	}
	return bit;
}
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<(1<<n);i++)
		sum+=countSetbit(i);
	cout<<sum<<endl;
}
