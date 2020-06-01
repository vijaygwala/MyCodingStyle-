#include<iostream>
using namespace std;
void push(int x);
void pop();
bool is_full();
bool is_empty();
int top();
int stack[100];
int head=-1;

bool is_full()
{
	if(head==99)
		return true;
	return false;
}
bool is_empty()
{
	if(head==-1)
		return true;
	return false;
}
void push(int x)
{
	if(is_full()){
		cout<<" stack overflow"<<endl;
		return;
	}
	stack[++head]=x;
	return;

	
}
void pop()
{
	if(is_empty()){
		cout<<"stack underflow"<<endl;
		return;
	}
	int x=stack[head];
	cout<<x<<" will be poped"<<endl;
	head--;
	return;
	
}
int top()
{
	if(is_empty())
		return -1;
	return stack[head];
}
void display()
{
	if(head>=0)
		{
			cout<<"elements of stack are :"<<endl;
			for(int i=head;i>=0;i--){
				cout<<stack[i]<<endl;
		}
		}
		else
			cout<<"stack is empty :"<<endl;
}
int main()
{
	int choice,x;
	cout<<"\n stack operations using array :"<<endl;
	
	cout<<"\n 1.push\n 2.pop\n 3.display\n 4.exit\n 5.top"<<endl;
	do
	{
		cout<<"\n enter the choice :"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"enter a value to be pushed :"<<endl;
					cin>>x;
				
					push(x);
					break;
				
			case 2:
				{
					pop();
					break;
				}
			case 3: 
			{
				display();
				break;
				
				
			}
			case 4:
				{
					cout<<"exit"<<endl;
					break;
				}
			case 5: cout<<"top = "<<top()<<endl;
						break;
	
		
		default:
			{
				cout<<"\n\t please enter a valid choice (1/2/3/4)"<<endl;
			}
	}
}
	while(choice!=4);

	
}
