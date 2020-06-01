#include<iostream>
using namespace std;
int main()
{int t,i=0;
cin>>t;
long long a[t];
for(int i=0;i<t;i++)
	cin>>a[i];

while(t--){
	long long n=a[i++],count=0;
	while(n!=0)
	{
		n=n&(n-1);
		count++;
	}
	cout<<count<<endl;
	}	
}
