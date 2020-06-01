#include<bits/stdc++.h>
using namespace std;
int step(int n)
{
int step[n+1];
step[0]=1;
step[1]=1;
for(int i=2;i<=n;i++)
step[i]=step[i-1]+step[i-2];
return step[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<step(n)<<endl;
}
