#include<bits/stdc++.h>
using namespace std;
int funfun(int i)
{if(i%4==0)
	return i;
else if(i%4==1)
	return 1;
else if(i%4==2)
	return i+1;
else if(i%4==3)
	return 0;
}
void fun(int l,int r)
{
	int myxor=0,xorr;
	for(int i=l;i<=r;i++)
	{	
		xorr=funfun(i);
		myxor^=xorr;
		
	}
	cout<<myxor<<endl;
}
int main()
{
	int i,j;
	cin>>i>>j;
	fun(i,j);
	
}
