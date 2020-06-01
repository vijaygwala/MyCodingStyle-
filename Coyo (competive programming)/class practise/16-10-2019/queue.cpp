#include<iostream>
using namespace std;
int q[100];
int rear=-1;
int front=-1;
bool is_full()
{
	if(rear==99)
		return true;
	return false;
}
bool is_empty()
{
	if(front==rear)
		return true;
	return false;
}
 void enqueue(int x)
 {
 	if(is_full())
 	{
 		cout<<"is full"<<endl;
 		return;
	 }
	 if(rear==-1)
	 	front++;
	 q[++rear]=x;
	 return;
 	
 }
 void dequeue()
 {
 	if(is_empty())
 		{
 			cout<<"queue is empty"<<endl;
 			return;
		 }
		 cout<<q[front]<<" is deleted"<<endl;
		front++;
		
 }
 int top()
 {
 	if(is_empty())
		return -1;
	return q[rear];

 }
 void display()
 {
 	for(int i=front;i<=rear;i++)
 		cout<<q[i]<<" ";
 	cout<<endl;
 }
 int main()
 {
 int choice;
 cout<<" enter your choice :"<<endl;
 while(choice!=4){
 cout<<"1. enqueue"<<endl<<"2. dequeue"<<endl<<"3. display"<<endl<<"4. exit"<<endl;
 cin>>choice;
 switch(choice)
 {
 	case 1:cout<<" enter the element you want to enqueue : ";
 				int x;
 				cin>>x;
 				enqueue(x);
 				break;
 	case 2:dequeue();
 			break;
 	case 3:display();
 			break;
 	default: cout<<"invalid choice"<<endl;
 				break;
 	case 4:	break;
 }
}
 return 0;
 	
 }
