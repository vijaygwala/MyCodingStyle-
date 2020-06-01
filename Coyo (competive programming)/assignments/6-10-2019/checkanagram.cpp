#include<iostream>
using namespace std;
void checkanagram(string,string);
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	checkanagram(a,b);
}
void checkanagram(string a,string b)
{
	int hash1[26]={0},hash2[26]={0},acount=0,bcount=0;
	for(int i=0;i<a.length();i++)
		hash1[a[i]-'a']+=1;
	for(int i=0;i<b.length();i++)
		hash2[b[i]-'a']+=1;
		
		for(int i=0;i<26;i++)
			cout<<hash1[i]<<" ";
			cout<<endl;
			
		for(int i=0;i<26;i++)
			cout<<hash2[i]<<" ";
		
		
		for(int i=0;i<26;i++)
		{
			
			if(hash1[i]==0 && hash2[i]!=0)
					acount=acount+hash2[i];
			else if(hash2[i]==0 && hash1[i]!=0)
					acount=acount+hash1[i];
			else if(hash1[i]!=0 && hash2[i]!=0){
				if(hash1[i]>hash2[i])
					acount=acount+hash1[i]-hash2[i];
				else
					acount=acount+hash2[i]-hash1[i];
				}
	
				
				
				
			
		}
		
	

	cout<<acount<<endl;
}
