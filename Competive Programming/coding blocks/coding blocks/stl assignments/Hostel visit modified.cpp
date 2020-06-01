#include<bits/stdc++.h>
using namespace std;
signed main()
{
	int  q,k;
	cin>>q>>k;
	priority_queue<long long int> pq;
	while(q--)
	{	
		 int t;
		cin>>t;
		if(t==1)
			{	
			long long int x, y;

            cin >> x >> y;

             long long int rocketDist = x*x + y*y;

             if (pq.size() < k) {

             pq.push(rocketDist);

             }

  		else {

    		if (pq.top() > rocketDist) {

      			pq.pop();

      			pq.push(rocketDist);

    				}

  			}				

}


			    
				
			
			else
			{	
			    cout<<pq.top()<<endl;
			}
	}
	return 0;
}
