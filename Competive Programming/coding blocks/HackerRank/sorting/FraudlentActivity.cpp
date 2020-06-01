#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d,count=0,median;
	cin>>n>>d;
	vector<int> v(n);
	
	
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	for(int i=0;i<n-d;i++)
	{	vector<int> m(d);
		for(int j=0;j<d;j++)
			m[j]=v[i+j];
		sort(m.begin(),m.end());
		if(d%2==1)
			median=m[d/2];
		else
			median=(m[d/2]+m[(d/2)+1])/2;
		if(v[d+i]>=(2*median))
			count++;
		
	}
	cout<<count<<endl;
}
