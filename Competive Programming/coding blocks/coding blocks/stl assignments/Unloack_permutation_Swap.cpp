#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int index=max_element(a.begin()+i, a.end())- a.begin();
		if(index!=i)
			{
				swap(a[i],a[index]);
				s--;
			}
			if(s==0)
				break;
			
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
