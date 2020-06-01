#include<iostream>
using namespace std;
int main()
{
	string s,check;
	int flag=1;
	getline(cin,s);
	getline(cin,check);
	for(int i=0;i<s.length();i++)
	{
		if(s.length()!=check.length())
		{
			flag=0;
			break;
		}
		else
		{
			for(int j=0;j<check.length();j++)
			{
				if(s[j]==check[i])
				{	flag=1;
					break;
					
				}
				
			}
		}
	}
	if(flag==0)
		cout<<"Not anagram"<<endl;
	else
		cout<<"anagram"<<endl;
	
}
