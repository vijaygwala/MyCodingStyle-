#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	long long int sum1=0,sum2=0,sum3=0;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	stack<int> s1,s2,s3;
	for(int i=0;i<n1;i++)
	{
		int value;
		cin>>value;
		sum1=sum1+value;
		s1.push(value);
	}
	
		for(int i=0;i<n2;i++)
	{
		int value;
		cin>>value;
		sum2=sum2+value;
		s2.push(value);
	}
		for(int i=0;i<n3;i++)
	{
		int value;
		cin>>value;
		sum3=sum3+value;
		s3.push(value);
	}
	cout<<s1.size()<<s2.size()<<s3.size()<<endl;
	cout<<sum1<<sum2<<sum3<<endl;
 while(!(sum1==sum2&&sum2==sum3&&sum3==sum1)){
        if(sum1==0||sum2==0||sum3==0){
            sum1=0;
            break;
        }else if(sum1>=sum2&&sum1>=sum3){
            sum1-=s1.top();
            s1.pop();
        }else if(sum2>=sum1&&sum2>=sum3){
            sum2-=s2.top();
            s2.pop();
        }else if(sum3>=sum1&&sum3>=sum2){
            sum3-=s3.top();
            s3.pop();
        }
    }
    

cout<<sum1<<sum2<<sum3<<endl;
}
