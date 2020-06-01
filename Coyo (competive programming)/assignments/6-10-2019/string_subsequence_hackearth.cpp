#include<iostream>
using namespace std;
bool isSubsequence(string s, string t);
int main()
{
	string s,t;cout<<"string S: "<<endl;
	cin>>s;cout<<"string t :"<<endl;
	cin>>t;
	cout<<isSubsequence(s,t)<<endl;;
}
 bool isSubsequence(string s, string t) {
	int hash[26]={0},flag=1;
	for(int i=0;i<t.length();i++)
		hash[t[i]-'a']+=1;
	for(int i=0;i<s.length();i++)
		if(hash[s[i]-'a']==0)
			flag=0;
	if(flag==0)
		return false;
	else
		return true;
	
    }
