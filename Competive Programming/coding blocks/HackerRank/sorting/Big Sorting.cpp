#include<bits/stdc++.h>
using namespace std;
bool comparator(string a,string b)
{
	if(a.length()==b.length())
		return a<b;
	else
	{
		return a.length()<b.length();
	}
}
int main()
{
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,comparator);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
}
