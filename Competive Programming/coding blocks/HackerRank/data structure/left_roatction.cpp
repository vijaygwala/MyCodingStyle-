#include <bits/stdc++.h>

using namespace std;

int main() {
 
    int i,d,k,n,temp,j;
    cin>>n>>d;
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[(i + (n - d)) % n]=a[i];
    }
        
for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
   
    return 0;
}
