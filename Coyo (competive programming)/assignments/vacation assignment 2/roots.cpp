#include<bits/stdc++.h>
using namespace std;
void findRoots(int a, int b, int c) 
{ 
     if (a == 0) 
     { 
        cout << "Invalid"; 
        return; 
     } 
  
     int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
  
     if (d > 0) 
     { 
         cout << " real and distinct \n"; 
         cout << (double)(-b + sqrt_val)/(2*a) << " "
              << (double)(-b - sqrt_val)/(2*a); 
     } 
     else if (d == 0) 
     { 
         cout << "real and equal \n"; 
         cout << -(double)b / (2*a); 
     } 
     else 
     { 
         cout << "Roots are imaginary "<<endl; 
         
     } 
} 
  
int main() 
{ 
    int a, b, c; 
    cin>>a>>b>>c;
    findRoots(a, b, c); 
    return 0; 
} 

