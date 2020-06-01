#include<iostream>
using namespace std;
int* adress(int *a)
{	
	return a;
	
}
int main()
{int a[5]={1,2,3,4,5};
	int *p=adress(a);
	for(int i=0;i<5;i++)
		{
			cout<<(p+i)<<endl;
		}
			/*for(int i=0;i<5;i++)
	{
		p[i]=&a[i];
		cout<<p[i]<<endl;
	}*/
	/*for(int i=0;i<5;i++)
	{	for(int j=0;j<5;j++){
		cout<<*(*(nums+i)+j)<<endl;
	}
	}*/
	


	
}
