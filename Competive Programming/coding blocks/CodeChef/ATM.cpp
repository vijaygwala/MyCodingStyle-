#include<iostream>
using namespace std;
void withdraw(int);
int main()
{
	int amount;
	cout<<"enter the amount to withdraw:"<<endl;
	cin>>amount;
	withdraw(amount);
	
}
void withdraw(int amount)
{
	float balance=500;
	if(amount%5==0)
	{
		if(amount < balance)
		{
			balance=balance-amount-0.1;
			cout<<"your currunt balance is :"<<balance<<endl;
		}
		else
		{
			cout<<"your currunt balance is :"<<balance<<endl;
		}
			
	}
	
}
