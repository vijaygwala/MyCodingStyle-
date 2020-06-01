#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 bool isIsogram(string s)
 {
 	int flag=1;
	int hash[26]={0};
	for(int i=0;i<s.length();i++){
		hash[s[i]-'a']+=1;
		if(hash[s[i]-'a']>1)
			flag=0;
	}
	if(flag==1)
		return true;
	else
		return false;
}
int main()
{	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	cout<<isIsogram(s)<<endl;
			}
}

