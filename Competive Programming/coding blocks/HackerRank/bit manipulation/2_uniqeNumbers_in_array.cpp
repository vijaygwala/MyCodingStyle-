#include<bits/stdc++.h>
using namespace std;
int checkIthBit(int n,int i)
{
	return n&(1<<i);
}
int main()
{
	int n,xorr=0,ele1=0,ele2=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		xorr=xorr^a[i];
	}
	int fset=0;
	while(xorr>0)
	{	int b=xorr&1;
		xorr=xorr>>1;
		if(b)
			break;
		fset++;
		
	}
	for(int i=0;i<n;i++)
	{
		if(checkIthBit(a[i],fset))
			ele1=ele1^a[i];
		else
			ele2=ele2^a[i];
	}
	cout<<ele1<<" "<<ele2<<endl;
}
