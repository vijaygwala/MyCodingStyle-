#include <iostream>
using namespace std;
long long int sum_sequence(long long int n)
{
  if(n==1)
   {          
     return 1;
   }
  else
  {
    long long int mul=1+(n*(n-1))/2;
    long long int sum=1;
    long long int i;
    for(i=1;i<=n;i++)
    {
      sum=sum*mul;
      mul++;
    }
    return sum+sum_sequence(n-1);
   }
}
int main()
{
  long long int t;
  cin>>t;
  while(t--)
   {
    long long int n;
    cin>>n;
    cout<<sum_sequence(n)<<endl;
   }
return 0;
}
