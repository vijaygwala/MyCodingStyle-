#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int t,count=0;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s.at(i)=='a'|| s.at(i)=='e'|| s.at(i)=='i'|| s.at(i)=='o'|| s.at(i)=='u'
            || s.at(i)=='A'|| s.at(i)=='E'|| s.at(i)=='I'|| s.at(i)=='O'|| s.at(i)=='U')
                count++;
        }
        cout<<count<<endl;
        count=0;
    }
}
