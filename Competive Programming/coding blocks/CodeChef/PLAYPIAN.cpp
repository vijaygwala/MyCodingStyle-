#include<iostream>
#include <string>
using namespace std;
int main(){
	int t,flag,i;
	cin>>t;
	while(t!=0){
	
	string str;
	cin>>str;
	//getline (cin, str);
	if(str.length()%2!=0)
		cout<<"no"<<endl;
	else
		{
			 flag=0;
			 i=0;
		while(i!=str.length()){
			if(str[i]==str[i+1])
				flag=1;
			i=i+2;
		}
	}
		
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
		t--;
	}
		}
	
	
	
	

