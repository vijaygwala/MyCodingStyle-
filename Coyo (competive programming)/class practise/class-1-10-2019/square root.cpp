#include<iostream>
using namespace std;
int fun(int n)
{
	if(n==0 || n==1)
		return n;
		 int i = 1, output = 1; 
    while (output <= n) 
    { 
      i++; 
      output = i * i; 
    } 
    return i - 1; 
		
}
int main()
{
	int n;
	cin>>n;
	cout<<fun(n)<<endl;
}
