#include<bits/stdc++.h>
using namespace std;
struct node* createnode(int data);
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node* createnode(int data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->left=NULL;
	new_node->data=data;
	new_node->right=NULL;
	return new_node;
	
	
}
void preorder(struct node* head)
{
if(head==NULL)
	return;
	cout<<head->data;
preorder(head->left);
preorder(head->right);
	
}
void postorder(struct node* head)
{
	if(head==NULL)
		return;
	postorder(head->left);
	postorder(head->right);
	cout<<head->data;
}
void inorder(struct node* head)
{
	if(head==NULL)
		return;
	inorder(head->left);
	cout<<head->data;
	inorder(head->right);
	
}
int createheight(struct node* head)
{

	if(head==NULL)
		return 0;
else{

	int leftcount = createheight(head->left);
	int rightcount = createheight(head->right);

if(leftcount>rightcount)
	return leftcount+1;
else 
	return rightcount+1;
}
	
	
}
int levelorder(struct node* head)
{
	

			if(head==NULL)
				return;
			queue<struct node*> q;
			q.push(head);
			while(!q.empty())
			{
				struct node* temp=q.front();
				q.pop();
				cout<<q->data<<" ";
				
			}
			
		
	}
	
	
}
int main()
{
	struct node *head=createnode(1);
	head->left=createnode(2);
	head->right=createnode(3);
	head->left->left=createnode(4);
	head->right->left=createnode(5);
	preorder(head);
	cout<<endl;
	inorder(head);
	cout<<endl;
	postorder(head);
	cout<<endl;
	int height=createheight(head);
	
}
