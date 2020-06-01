#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],p,fm=0,sm=0,tm=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(fm<=a[i])
			{
				tm=sm;
				sm=fm;
				fm=a[i];
				
			}
		else if(sm<=a[i])
		{
			tm=sm;
			sm=a[i];
		}
		else if(tm<=a[i])
		{
			tm=a[i];
			
		}
	}
	cout<<"first max : "<<fm<<endl<<"second max : "<<sm<<endl<<"third max : "<<tm<<endl;
		
		
}
