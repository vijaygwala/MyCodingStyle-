#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,k;
	string s,m;
	cin>>n;
	cin>>s;
	cin>>k;
	while(k>26)
	{
		k=k%26;
		
	}
	
	for(int i=0;i<s.length();i++)
	{
		char c=s[i];
		if(c>=97 && c<=122){
		c=((c+k)%97)%26+97;
		m+=c;}
		else if(c>=65 && c<=90){
		c=((c+k)%65)%26+65;
		m+=c;}
		else
			m+=c;
	}
	cout<<m<<endl;
}
