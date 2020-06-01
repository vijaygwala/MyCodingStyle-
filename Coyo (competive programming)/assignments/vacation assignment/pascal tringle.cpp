#include<iostream>
using namespace std;
int main()
{
	int row,column,n,no,space;
	cout<<"enter the rows up to pascal tringle evalute :"<<endl;
	cin>>no;
	for(row=0;row<no;row++)
	{
		for(space=0;space<(no-row);space++)
				cout<<" ";
		n=1;
		for(column=0;column<=row;column++)
		{
			cout<<" "<<n;
			n=n*(row-column)/(column+1);
		}
		cout<<endl;
	}
	return 0;
}
