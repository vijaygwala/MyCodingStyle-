#include<bits/stdc++.h>
using namespace std;


int main() {
    queue<int>q;
    int x,item,ops;
    cin>>ops;
    while(ops--)
    {
    	cin>>x;
    	if(x==1){
    		cin>>item;
    		q.push(item);
    	}
    	else if(x==2)
    	{
    		q.pop();
		}
		else if(x==3)
		{
			cout<<q.front()<<endl;
		}
    		
    		
	}
    
    
    return 0;
}

