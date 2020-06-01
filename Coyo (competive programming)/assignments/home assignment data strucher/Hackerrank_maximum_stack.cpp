#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    stack<int> s,a;
    int t,o,x;
    cin>>t;
    while(t--){
    cin>>o;
    if(o==1){
        cin>>x;
        s.push(x);
        if(s.size()==1)
            a.push(x);
        if(x>a.top())
            a.push(x);
        else
            a.push(a.top());
        }
    else if(o==2){
        s.pop();
        a.pop();
    }
    else if(o==3)
    {
        cout<<a.top()<<endl;
    }
        }
    return 0;
}

