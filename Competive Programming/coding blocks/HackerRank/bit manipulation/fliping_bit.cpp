#include<bits/stdc++.h>
using namespace std;
int main()
{
 long n,res=0;
 cin>>n;
 long temp=n;
 for(int i=0;i<32;i++)
 {
 if(!(temp&(1<<i)))
 	res+=(1<<i);
}
cout<<res<<endl;
}
