#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int fre[32]={0};
	int mask=0;
	
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{	string s;
			cin>>s;
		for(char c:s)
		{
			if(c=='a') mask=mask|(1<<0);
			if(c=='e') mask=mask|(1<<1);
			if(c=='i') mask=mask|(1<<2);
			if(c=='o') mask=mask|(1<<3);
			if(c=='u') mask=mask|(1<<4);			
		}
		fre[mask]++;	
		}
	}
	long long int pair=0;
	for(int i=1;i<32;i++)
	{	for(int j=i+1;j<32;j++)
		{
			if((i|j)==31)
				pair=pair+fre[i]*fre[j];
		}
		
	}
	pair=pair+(fre[31]*(fre[31]-1))/2;
	cout<<pair<<endl;
}
