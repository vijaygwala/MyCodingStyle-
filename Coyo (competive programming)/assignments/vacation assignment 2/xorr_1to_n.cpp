#include <iostream> 
using namespace std;  
int myXOR(int x, int y) 
{ 
    int res = 0;
    for (int i = 31; i >= 0; i--)                      
    { 
       bool b1 = x & (1 << i); 
       bool b2 = y & (1 << i); 
        
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
    
        res <<= 1; 
        res |= xoredBit; 
    } 
    return res; 
} 
  

int main() 
{ 
  long long n,xorr=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		{
			if(myXOR(xorr,a[i])==0)
				continue;
			xorr=myXOR(xorr,a[i]);
		
		}
	cout<<xorr<<endl; 
} 
