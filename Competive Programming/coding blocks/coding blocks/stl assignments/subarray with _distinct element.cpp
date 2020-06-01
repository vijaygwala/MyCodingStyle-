#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	    cin>>v[i];
	unordered_set<int> s;
	int i=0,j=0;
	while(i<n)
	{
	while(j<n && s.find(v[j])==s.end())
	{
		s.insert(v[j]);
		j++;
	}
	auto it =s.find(v[i]);
	s.erase(it);
	sum+=j-i;
	i++;
}

cout<<sum<<endl;
return 0;
	
}
