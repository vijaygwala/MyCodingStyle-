#include<iostream>
using namespace std;
int findsteps(int n)
{
	if(n==1 || n==0)
		return 1;
	else if(n==2)
		return 2;
	else
	return findsteps(n-1)+findsteps(n-2)+findsteps(n-3);
}
int main()
{
	int n;
	cout<<"enter the number :"<<endl;
	cin>>n;
	cout<<findsteps(n)<<endl;
}
