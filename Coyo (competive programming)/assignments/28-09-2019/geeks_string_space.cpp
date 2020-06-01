#include <iostream>
using namespace std;
 
void print(char str[],string ans,int ind,bool flag)
{
    if(str[ind]=='\0')
    {
        cout<<ans<<"$";
        return;
    }
    if(str[ind])
    {
        print(str,ans+str[ind],ind+1,true);   
        if(flag)                             
        print(str,ans+" ",ind,false);      
 
    }
}
void  printSpace(char str[])
{
    //Your code here
    string ans="";
    ans+=str[0];
    print(str,ans,1,true);
}
int main() {
	// your code goes here
	char str[]="ABCD";
	printSpace(str);
	cout<<endl;
	return 0;
}
