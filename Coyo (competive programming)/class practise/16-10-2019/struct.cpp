#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct book
{
	int page;
	string name;
	float price;
	
};
int main()
{
	struct book a,b;
	a.page=100;
	a.name="A";
	a.price=100.25;
	b.page=200;
	b.name="B";
	b.price=200.25;
	cout<<a.page<<" "<<b.page<<endl;
	cout<<a.name<<" "<<b.name<<endl;
	cout<<a.price<<" "<<b.price<<endl;
	
	
}
