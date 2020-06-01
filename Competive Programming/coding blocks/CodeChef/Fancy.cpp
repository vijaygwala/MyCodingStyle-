#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	int t,flag;
	cin>>t;
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream str(s);
		string word;
		while(str>>word)
		{
			 flag=0;
			if(word=="not")
				flag=1;
		}
		if(flag==1)
			cout<<"Real Fancy"<<endl;
		else
			cout<<"regularly fancy"<<endl;

		
	}
}
