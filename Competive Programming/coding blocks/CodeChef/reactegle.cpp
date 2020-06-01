#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,count=0,t;
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	if(a==b || a==c ||a==d)
		count++;
	if(b==a || b==c || b==d)
		count++;
	if(c==a || c==b || c==d)
		count++;
	if(d==a || d==b || d==c)
		count++;
	if(count==4)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}
}
