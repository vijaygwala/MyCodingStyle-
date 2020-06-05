
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> stk;
	string s;
	cin>>s;
	char x;
	int flag=1;
	for(int i=0;i<s.length();i++)
	{
		char c=s[i];
		if(c=='(' || c=='{' || c=='[')
			stk.push(c);
		
		if (s.empty()) 
		{
           flag=0;
           break;
       }
  
        switch (s[i]) 
        { 
        case ')': 
  
            
            x = stk.top(); 
            stk.pop(); 
            if (x=='{' || x=='[') 
                flag=0; 
            break; 
  
        case '}': 
  
            
            x = stk.top(); 
            stk.pop(); 
            if (x=='(' || x=='[') 
                flag=0; 
            break; 
  
        case ']': 
  
            
            x = stk.top(); 
            stk.pop(); 
            if (x =='(' || x == '{') 
                flag=0;
            break; 
        } 
	}
	

    
	if(stk.empty() && flag==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
