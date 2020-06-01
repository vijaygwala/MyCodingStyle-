#include<bits/stdc++.h>
using namespace std;
void display(stack<int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
int main()
{
	stack<int> s;
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	display(s);
	
}
