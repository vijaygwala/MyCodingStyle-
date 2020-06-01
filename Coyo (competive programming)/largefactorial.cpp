#include<iostream>
using namespace std;
int multiply(int a[], int m, int currunt_result_size);

int main()
{
	int a[200];
	
	a[0]=1;
	int currunt_result_size=1;
	for(int m=2;m<=n;m++)
	{
		currunt_result_size = multiply(a,m,currunt_result_size);
	}
	
	for(int j=currunt_result_size-1;j>=0;j--)
		cout<<a[j];
	
}
int multiply(int a[],int m,int currunt_result_size)
{
	int carry=0;
	for(int i=0;i<currunt_result_size;i++)
	{
		int product=a[i]*m+carry;
		a[i]=product%10;
		carry=product/10;
	}
	while(carry)
	{
		a[currunt_result_size]=carry%10;
		carry=carry/10;
		currunt_result_size+=1;
	}
	return currunt_result_size;
}
