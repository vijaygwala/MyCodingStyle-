#include<iostream>
using namespace std;
int main()
{
	string s,check;
	int flag=1;
	int a[125]={0};
	getline(cin,s);
	getline(cin,check);
	for(int i=0;i<s.length();i++)
	{char c=s[i];
	char d=check[i];
	a[c]+=1;
	a[d]+=1;
		
				
				
			
	}
	if(s.length()!=check.length())
		{
			flag=0;
		}
		else{
	for(int j=0;j<s.length();j++)
		{	char c=s[j];
			if(a[c]!=2)
				flag=0;
			
			}
		}
			if(flag==0)
				cout<<"not anagram"<<endl;
			else
				cout<<"anagram"<<endl;	
}
