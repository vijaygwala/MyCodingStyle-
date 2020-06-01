#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
   vector<vector<int>> v(n);
   for(int i=0;i<n;i++)
   {    int k;
   cin>>k;
   v[i].resize(k);
   for(int j=0;j<k;j++)
    cin>>v[i][j];

   }
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        cout<<v[i][j]<<endl;
    }   
    return 0;
}


