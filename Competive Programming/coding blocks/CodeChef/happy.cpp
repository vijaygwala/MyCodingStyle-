#include<iostream>
using namespace std;
void Happy(int n)
{
	int digit,sumsquare=0;
	int c=n;
	while(true)
	{	
		digit=n%10;
		sumsquare=sumsquare+digit*digit;
		n=n/10;
		if(n==0 &&sumsquare!=1){
			n=sumsquare;
			sumsquare=0;
		}
		if(sumsquare==1){
			cout<<"Happy"<<endl;
			break;
		}
		if(sumsquare==4){
			cout<<"Unhappy"<<endl;
			break;
		}
			
	}
}
int main()
{
	int n;
	cout<<"enter a number:"<<endl;
	cin>>n;
	Happy(n);
}
