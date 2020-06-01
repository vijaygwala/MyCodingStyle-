#include<iostream>
using namespace std;
int main(){
	int n,flag=0,size;
	cout<<"enter the size of array:"<<endl;
	cin>>size;
	cout<<"enter the element to be searched"<<endl;
	cin>>n;
	int a[size];
	for(int i=0;i<size;i++)
		cin>>a[i];
	
	for(int i=0;i<5;i++)
	{
		if(a[i]==n){
			flag=1;
			break;
		}
			
	}
	if(flag==1)
		cout<<"element found"<<endl;
	else 
		cout<<"element not found"<<endl;
}
