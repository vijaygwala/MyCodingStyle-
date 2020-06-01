
#include<bits/stdc++.h>
using namespace std;
void  printSpace(char str[]);
void print(char str[],string ans,int ind,bool flag);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        printSpace(str);
        cout<<endl;
    }
}



void  printSpace(char str[])
{ string ans="";
    ans+=str[0];
    print(str,ans,1,true);
}
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
