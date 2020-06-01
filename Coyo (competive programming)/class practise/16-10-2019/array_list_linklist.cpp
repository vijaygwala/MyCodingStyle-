#include<iostream>
#include<bits/stdc++.h>
int length(struct node*);
void create();
void display();
using namespace std;

struct node
{
	int data;
	struct node* next;
	
};
struct node* head=NULL;
void create()
{
	int i,n;
	struct node*temp,*ptr;
	cout<<"enter the number of node\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		temp=(struct node*) malloc(sizeof(struct node));
		cout<<"enter the data\n";
		cin>>temp->data;
		temp->next=NULL;
	    if(head==NULL)
	    	head=temp;
	    else
	    {
	    	ptr=head;
	    	while(ptr->next!=NULL)
	    		ptr=ptr->next;
	    		ptr->next=temp;
			
		}
	}
}



int main()
{
	int choice; 
	
	 while(choice!=4) { 
	 cout<<"1:create array using linklist\n2:display\n3:length\n4:exit\n";
	 cout<<"enter the choice :"<<endl;
	 cin>>choice;
	  switch(choice) { 
	  case 1: create(); 
	  cout<<"list is create successful\n";
	   break; 
	case 2:display(); 
			break; 
	case 3:cout<<length(head)<<endl;
			break;
	case 4:exit(0);
	 		break; 
	 default: cout<<"invalid input\n"; 
	 }
}
return 0; 
}  

void display() { 
struct node *temp; 
temp=head; 
if(head==NULL) 
cout<<"list is empty\n"; 
else {
 while(temp!=NULL)
  { cout<<temp->data<<" ";
   temp=temp->next;
    }
	cout<<endl;
	 }
	 }   
int length(struct node* temp)
{int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

