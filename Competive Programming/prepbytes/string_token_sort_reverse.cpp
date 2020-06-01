#include<bits/stdc++.h>
using namespace std;
string extract(string str,int key)
{
	char *s=strtok((char *)str.c_str()," ");
	while(key>1)
	{
		s=strtok(NULL," ");
		key--;
	}
	return (string)s;
}

int main()
{
	int n;
	cin>>n;
	cin.get();
	string a[100];
	for(int i=0;i<n;i++)
		getline(cin,a[i]);
	int key;
	string reversal,ordering;
	cin>>key>>reversal>>ordering;
	//pair of strings
	pair<string,string> spair[100];
	for(int i=0;i<n;i++)
	{
		spair[i].first=a[i];
		spair[i].second=extract(a[i],key);
	}
	
	//sorting
	
	if(ordering=="numeric")
		sort(spair,spair+n,numericCompare);
	else
		sort(spair,spair+n,lexicoCompair);
		
	for(int i=0;i<n;i++)
		cout<<spair[i].first<<endl;
	

	
	
	
}
