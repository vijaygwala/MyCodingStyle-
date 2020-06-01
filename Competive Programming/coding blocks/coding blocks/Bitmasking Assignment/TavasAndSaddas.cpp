#include<bits/stdc++.h>
using namespace std;
int main()
{
	char n[100];
	cin>>n;
	int len=strlen(n);
	int ans=(1<<len)-2;
	int pos=0;
	for(int i=len-1;i>=0;i--)
	{
		if(n[i]=='7')
			ans+=(1<<pos);
		pos++;
	}
	cout<<ans+1<<endl;
}
