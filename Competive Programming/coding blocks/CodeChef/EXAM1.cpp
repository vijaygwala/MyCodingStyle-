#include<iostream>
#include<string>
using namespace std;
int main()
{	int point,t,n;
	cin>>t;
	while(t--){
	cin>>n;
	point=0;
	string s,a;
	
	
	string N="N";
	cin>>s;
	cin>>a;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==a[i])
		{
			point+=1;
		}
		else if(s[i]!=a[i] && a[i]==N[0])
			continue;
		else
		{i++;
		continue;
			
		}
		
	}
	cout<<point<<endl;
}
}
