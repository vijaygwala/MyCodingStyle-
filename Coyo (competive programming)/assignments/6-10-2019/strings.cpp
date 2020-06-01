#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int a=int(s1.size());
    int b=int(s2.size());
    cout<<a<<" "<<b<<endl;
    
   
    cout<<s1+s2<<endl;
    char c=s1[0];
    s1[0]=s2[0];
    s2[0]=c;
    cout<<s1+" "+s2<<endl;

  
    return 0;
}

