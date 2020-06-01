#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,capital;
	int hash1[26]={0},hash2[26]={0},flag=1;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.length();i++)
	{	char c=s1[i];
		if(65<=c && c<=90){
			hash1[c-'A']+=1;
			capital+=c;
		}
		else
			hash1[c-'a']+=1;
	}
	for(int i=0;i<s2.length();i++)
	{
		hash2[s2[i]-'A']+=1;
	}
	cout<<capital<<endl;
	
	for(int i=0;i<s2.length();i++)
		 if(hash1[s2[i]-'A']==0)
				flag=0;
	for(int i=0;i<capital.length();i++)
		if(hash2[capital[i]-'A']==0)
			flag=0;
		 

	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	
}

