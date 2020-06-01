#include<bits/stdc++.h> 
using namespace std; 


class TNode 
{ 
	public: 
	int data; 
	TNode* left; 
	TNode* right; 
}; 

TNode* newNode(int data); 


TNode* sortedArrayToBST(int arr[], 
						int start, int end) 
{ 
	
	if (start > end) 
	return NULL; 

	
	int mid = (start + end)/2; 
	TNode *root = newNode(arr[mid]); 

	
	root->left = sortedArrayToBST(arr, start, 
									mid - 1); 

	
	root->right = sortedArrayToBST(arr, mid + 1, end); 

	return root; 
} 


TNode* newNode(int data) 
{ 
	TNode* node = new TNode(); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return node; 
} 


void preOrder(TNode* node) 
{ 
	if (node == NULL) 
		return; 
	cout << node->data << " "; 
	preOrder(node->left); 
	preOrder(node->right); 
} 

 
int main() 
{ 	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];


	
	TNode *root = sortedArrayToBST(arr, 0, n-1); 

	preOrder(root); 

	return 0; 
} 



