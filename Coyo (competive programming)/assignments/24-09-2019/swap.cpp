#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the value of x and y :"<<endl;
	cin>>x>>y;
	cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
	
}
