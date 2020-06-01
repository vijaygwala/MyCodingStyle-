#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j=n-1;
	while(i<j){
			if(s==0)
			break;
		
		if(a[i]<a[j]){
				swap(a[i],a[j]);
				s--;
					}
					i++;
					j--;
			
			
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

