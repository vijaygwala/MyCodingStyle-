#include<iostream>
using namespace std;
int main()
{
	int t,n;
	
	cin>>t;
	while(t!=0){
	cin>>n;
	int a[n];
	int c=0;
	int sum=0;
	for(int k=0;k<n;k++)
		cin>>a[k];
	for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				sum=sum+c;
			}
			if(a[i]%2==0){
				c++;
				
			}
			
		}
		
	cout<<sum<<endl;
	t--;
}
}
