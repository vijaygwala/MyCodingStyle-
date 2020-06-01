#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
	int rev=0;
	while(n!=0)
	{
		int r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
int main()
{
	int i,j,k,diff,count=0;
	cin>>i>>j>>k;
	for(int p=i;p<=j;p++)
		{
			diff=abs(p-reverse(p));
			if(diff%k==0)
				count++;
		}
		cout<<count<<endl;
	
	
}

