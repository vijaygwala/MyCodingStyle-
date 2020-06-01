#include<iostream>
#include<bits/stdc++.h>
int length(struct node*);
void create();
void insert_node();
void display();
void del();
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


void insert_node()
{
int choice,pos,i=1;
struct node *temp,*ptr,*prev;
temp=(struct node*)malloc(sizeof(struct node));
cout<<"enter the data"<<endl;
cin>>temp->data;
temp->next=NULL;
cout<<"enter the choice :"<<endl;
cout<<"1:first\n2:between\n3:last\n";

cin>>choice;
switch(choice)
{
	case 1:temp->next=head;
			head=temp;
			break;
	case 2:cout<<"enter the position"<<endl;
			cin>>pos;
			ptr=head;
			while(ptr!=NULL && pos!=i)
			{
				prev=ptr;
				ptr=ptr->next;
				i++;
			}
			if(ptr==NULL)
				cout<<"position exeed"<<endl;
			else
			{
				prev->next=temp;
				temp->next=ptr;
			}
			break;
		case 3:
				ptr=head;
				while(ptr->next!=NULL)
				ptr=ptr->next;
				ptr->next=temp;
				break;
		default :cout<<"invalid choice"<<endl;
	}
}
	
	

int main()
{
	int choice; 
	
	 while(choice!=6) { 
	 cout<<"1:create\n2:insert\n3:display\n4:delete\n5:length\n6:exit\n";
	 cout<<"enter the choice :"<<endl;
	 cin>>choice;
	  switch(choice) { 
	  case 1: create(); 
	  cout<<"list is create successful\n";
	   break; 
	case 2:insert_node();
		cout<<"node is inserted\n";
		 break;
	case 3:display(); 
			break; 
	case 4:del();
	 		break;
	case 5:cout<<length(head)<<endl;
			break;
	case 6:exit(0);
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
void del()
{
	int position,i=1;
	struct node *temp,*ptr;
	ptr=head;
	cout<<"enter the position of node you want to delete :"<<endl;
	cin>>position;
	if(position==1)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	else{
	while(i<position-1)
	{
		ptr=ptr->next;
	
		i=i+1;
		
	}
		temp=ptr->next;
		ptr->next=temp->next;
		free(temp);
	}
	cout<<"\nnode is deleted succesfully :"<<endl;
	
}

