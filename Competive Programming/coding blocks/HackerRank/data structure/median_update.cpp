#include<bits/stdc++.h>
using namespace std;
void remove(vector<int> v,int index)
{
	vector<int>::iterator it=v.begin();
	advance(it,index);
	v.erase(it);
	
}
int main()
{
	vector<int> v;
	v.push_back(3);
	v.push_back(9);
	v.push_back(8);
	sort(v, v+v.size());
	
	cout<<v.size()<<endl;
	
	
}

