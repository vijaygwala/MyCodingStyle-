#include<bits/stdc++.h>
using namespace std;

long long nCr(int n,int r)
{
  int  i=0;
  long long result=1;
  if (r > n/2)
  {
    for (i = 0; i <= n-r-1; i++)
	  {
	    result *= (n-i);
	    result /= (i+1);
	  }
	  return result;
  }
  for (i = 0; i < r; i++)
  {
    result *= (n-i);
    result /= (i+1);
  }
  return result;
}

int main()
{ int t;
cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	cout<<nCr(n-1,k-1)<<"\n";
}
	return 0;
}

