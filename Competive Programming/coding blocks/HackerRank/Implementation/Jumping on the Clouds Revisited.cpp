#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
int i = 0;
int energy = 100;

do {

    i = (i + k) % n;
    energy -= a[i] * 2 + 1;
    
} while (i != 0);


	cout<<energy<<endl;
}
