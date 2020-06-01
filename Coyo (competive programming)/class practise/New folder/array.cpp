#include<iostream>
using namespace std;
int main()
{
	int n,max;
	cin>>n;
	int a[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[i]=0;
	}
		
	for(int i=0;i<n;i++)
	{
		c[a[i]]+=1;
		
	}
	for(int i=0;i<n;i++)
		{
			 max=c[i];
			if(max<c[i]){
				max=c[i];
				max=i;
			}
			
		}
		cout<<max+1<<endl;
		
		
	
}
