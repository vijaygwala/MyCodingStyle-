#include<iostream>
#include<cstring>

using namespace std;
bool prime(int n)
	{int count=0;
		for(int i=1;i<=n/2;i++)
		{
			if(n%i==0)
				count++;
			if(count>1)
				return false;
	}
	return true;
			
				
		
		
	}

int main()
{
int n,flag=1;
cin>>n;
bool a[n+1];
memset(a,true,n+1);

a[0]=false;
a[1]=false;

for(int i=2;i<n+1;i++)
{	
	if(prime(i)){
	for(int j=i*2;j<n+1;j+=i){
		a[j]=false;
		if(a[n]==false){
			cout<<"not prime"<<endl;
			flag=0;
			break;
		}
		}
	}
	if(flag==0)
		break;
}
if(a[n]==true && flag==1)
	cout<<"prime"<<endl;

		
	





}


