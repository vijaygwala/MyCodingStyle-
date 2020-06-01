#include<bits/stdc++.h>
using namespace std;
int count(long long  n)
{
    if(n==0)
        return 0;
    long sum =n%10+count(n/10);
    
    if(sum/10)
    	sum=count(sum);
    
    return sum;
}


int main()
{
	string n;
	int k;
	cin>>n>>k;
   long long int sum=0;
	long long int m;
   for(int i=0; i<n.size(); i++){
        sum += n[i] - '0';
    }

   
    cout<<count(sum*k)<<endl;
}


