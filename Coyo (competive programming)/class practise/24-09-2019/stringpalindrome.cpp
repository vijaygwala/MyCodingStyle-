#include<iostream>
using namespace std;
int main()
{
	string s,reverse;
	getline(cin,s);
	for(int i=s.length()-1;i>=0;i--)
	{
		reverse+=s[i];
	}
	if(s==reverse)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;
}
