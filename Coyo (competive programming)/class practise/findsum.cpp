#include<iostream>
#include<string>

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0,index=0,number=0,k=1;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
	if(s[i]>='a' && s[i]<='z')
	
		continue;
	else{
		number=0;
		k=10;
	while(s[i]>='0' && s[i]<='9'){
		char c=s[i];
		int n=c-'0';
			number=number*k+n;
			
			i++;
		}
		sum=sum+number;

}
}
cout<<sum<<endl;
}


	
	
	
	

