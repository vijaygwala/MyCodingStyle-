#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,min,contains=0;
	    cin>>n;
	    int tank[n];
	    for(int i=0;i<n;i++)
	    	cin>>tank[i];
	    if(tank[0]<tank[n-1])
	        min=tank[0];
	    else
	        min=tank[n-1];
	   for(int i=1;i<n-1;i++)
	   {
	       if(tank[i]>0 && tank[i]<min)
	        contains=contains+(min-tank[i]);
	       else if(tank[i]==0)
	        contains=contains+min;
	       
	   }
	   cout<<contains<<endl;
	   
	}
	return 0;
}
