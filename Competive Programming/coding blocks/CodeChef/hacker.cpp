  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,index=0,p,bound;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end()); 
   int q;
   cin>>q;
   vector<int> v1(q);
   for(int i=0;i<q;i++)
   		cin>>v1[i];
   for(int k=0;k<q;k++)
    {
         p=v1[k];
        index=0;
       
        for(int j=0;j<n;j++)
        {
            
            if(v[j]==p)
            {
                index=j+1;
                break;
        
                
            }
            
            	
			
            


        }
        if(index>0)
        	cout<<"Yes"<<" "<<index<<endl;
        else{
        	
            bound=0;
            for(int h=0;h<n;h++){
            	if(p<v[h]){
            		bound=h;
            		cout<<"No"<<" "<<bound<<endl;
            		break;
            	}
            		
            		
            	}
		}
       
    }

    return 0;
}


        
   

