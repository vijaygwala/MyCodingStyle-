#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int vowel=0,consonent=0,space=0,digit=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A' || s[i]=='E' ||s[i]=='I' || 
                        s[i]=='O' || s[i]=='U'||s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
                || s[i] == 'o' || s[i] == 'u')
                vowel++;
        else if(s[i]>='a'&& s[i]<='z' || s[i]>='A' && s[i]<='Z')
        	consonent++;
        else if(s[i]>='0' && s[i]<='9')
        	digit++;
    	else if(s[i]==' ')
    		space++;
    		
	}
	cout<<"vowels : "<<vowel<<" "<<"consonent : "<<consonent<<" "<<"digit : "<<digit<<" "<<"spaces : "<<space<<endl;
	
}
