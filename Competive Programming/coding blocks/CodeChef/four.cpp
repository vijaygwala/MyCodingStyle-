#include<iostream>
using namespace std;
int checkfour(int);
int main()
{
	int t,n,four;
	cout<<"enter the number of test cases:";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cout<<"entert the number you want to check :"<<endl;
		cin>>n;
		four=checkfour(n);
		cout<<four<<endl;
	}
}
int checkfour(int n)
{
int count=0,c;
	while(n!=0)
	{
		c=n%10;
		if(c==4)
		{
			count++;
		}
		n=n/10;
	}
	return count;
}
