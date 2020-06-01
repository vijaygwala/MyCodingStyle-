#include<iostream>
using namespace std;
int main()
{
	string s,modify;
	char nine='9';
	cin>>s;
	char min=s[0];
	for(int i=1;i<s.length();i++)
	{
		char num=s[i];
		if(num<min)
			min=num;
	}
	for(int i=0;i<s.length();i++)
	{	char t=s[i];
		if(t!=min)
			modify+='0'+(nine-t);
		else
			modify+=t;
	}
	cout<<modify<<endl;
}
