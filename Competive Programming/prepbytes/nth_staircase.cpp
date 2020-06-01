#include<bits/stdc++.h>
using namespace std;
int step(int n)
{
	if(n==0 || n==1)
		return 1;
	return step(n-1)+step(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<step(n)<<endl;
}
