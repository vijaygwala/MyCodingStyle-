#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	int flag=1;
	int hash1[26]={0},hash2[26]={0}; cout<<"enter the first String :"<<endl;
	getline(cin,s1); cout<<"enter the second string :"<<endl;
	getline(cin,s2);
	for(int i=0;i<s1.length();i++){
		hash1[s1[i]-'a']+=1;
		hash2[s2[i]-'a']+=1;
	}
		if(s1.length()!=s2.length())
			cout<<"Not anagram"<<endl;
		else
		{for(int i=0;i<26;i++)
		{
			if(hash1[i]!=hash2[i])
					flag=0;
		
		}
		if(flag==1)
			cout<<"Anagram"<<endl;
		else
			cout<<"Not anagram"<<endl;
		}
	
}
	

