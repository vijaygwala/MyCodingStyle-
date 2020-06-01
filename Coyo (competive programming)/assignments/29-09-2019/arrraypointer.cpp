#include<iostream>
using namespace std;
int main()
{
	int a[5]={4,5,6,7,8};
	int *p;
	p=&a[0];
	cout<<"First trick :"<<endl;
	while(*p!=a[5]){
		cout<<*p<<endl;
		p++;
	}
	cout<<"second trick:"<<endl;
	/*for( p=a;p<a+5;p++ )
	{
		cout<<*p<<endl;
	}*/
	for(int i=0;i<5;i++)
	{
		cout<<*(a+i)<<endl;
	}
	
	
	
	
	
}
