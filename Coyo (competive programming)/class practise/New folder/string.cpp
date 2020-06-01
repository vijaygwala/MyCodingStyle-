#include<iostream>
using namespace std;
int main()
{
	int a[125]={0};
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{	char c=s[i];
		a[c-'a']+=1;
		
	}
	string modified="";
	for(int i=0;i<125;i++)
	{
		if(a[i]>0)
			{
				char c =i;
				modified+=c;
				char f=a[i];
				modified+=f;
				
			}
	}
	cout<<modified<<endl;
	
}
