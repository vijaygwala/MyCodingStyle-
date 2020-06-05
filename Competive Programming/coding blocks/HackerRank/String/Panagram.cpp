#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<char> st;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
		{
			char c=s[i];
			if(c>=65 && c<=90 || c>=97 && c<=122)
				st.insert(c);
		}
	if(st.size()>=26)
		cout<<"pangram"<<endl;
	else
		cout<<"not pangram"<<endl;
}
