#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[26]={0},i=0,c=0,d=0;
	char known[50],words[50];
	
				cin>>known;
	
	while(known[i]!='\0')
	{
		char chr=known[i];
		int n=(int)chr;
		int assign=n-97;
		a[assign]=1;
		i+=1;
	}
	int n; cin>>n;
	for(int j=0;j<n;j++){
			cin>>words;
			cout<<words<<endl;
			
	i=0;
	c=0;
	d=0;
	while(words[i]!='\0')
	{
		char chr=words[i];
		int n=(int)chr;
		int assign=n-97;
		i+=1;
		if(a[assign]==1)
			c++;
		else
			d++;
		
	}

	if(d>0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	
	}
	
	
	
}
