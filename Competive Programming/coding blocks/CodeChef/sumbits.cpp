#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sumofdigit(int);
void  printMax(int);  
int main()
{
	int t,l=0,k,n,s;
	vector<int> v;
	int m[100];
	cout<<"enter the test cases:"<<endl;
	cin>>t;
	for(int i=0;i<t;i++)
	{cout<<"enter the number:"<<endl;
		cin>>n;
		for(int j=0;j<n;j++){
		cin>>k;
		v.push_back(k);
		}
	
		sort(v.begin(),v.end());
		 s=(int)v.size();
		//cout<<s;
		for(int u=0;u<s-1;u++)
		{
			int p=(v.at(s-1)*v.at(u));
			int sum=sumofdigit(p);
			m[l++]=sum;
			
			
			
			
		
		
		}
		
		
		
		
		
	 }
	  
	 for(int c=0;c<s;c++)
	 	cout<<m[c]<<" ";
	 printMax(m);
}
int sumofdigit(int n)
	{ int sum=0,rem;
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		return sum;
	}
	void  printMax(int arr[])  
{  
int size=10;
    int max = arr[0];    
        for (int i = 0; i < size; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "Maximum element is: "<< max <<"\n";    
}  
