#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,k;
	cin>>s;
	
	k="";
	for(int i=1;i<s.length();i++)
	{
		
		 if(s[i]==s[i-1])
			{
				s=s.substr(i+1);
				i=0;
			}
		else if( i!=s.length()-1 && s[i]==s[i+1])
		{
			s=s.substr(0,i)+s.substr(i+2);
			i=0;
		}
	
	}
   
	
        if(s=="")
        cout<<"Empty String"<<endl;
        else
		cout<<s<<endl;
}
