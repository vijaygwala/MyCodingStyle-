#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,count;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		count=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='C')
			{
				if(s[i+1]=='E'||s[i+1]=='S'||s[i+1]=='C')
					count++;
					
			}
			else if(s[i]=='E')
			{
				if(s[i+1]=='S'||s[i+1]=='E')
					count++;
			}
			else
			{
				if(s[i]=='S')
					count++;
			}
		}
		if(count==s.size()-1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}
