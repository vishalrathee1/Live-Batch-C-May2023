#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node * left;
	Node * right;
	Node(int d, Node * l = NULL, Node * r = NULL){
		data = d;
		left = l;
		right = r;
	}
};

Node * buildTree(){

	int n;
	cin>>n;
	if(n==-1) return NULL;
	Node * root = new Node(n); //1

	root->left = buildTree(); //2subtree
	root->right = buildTree(); //3subtree

	return root;

}

int i = 0;
Node * buildTree2(int arr[], int n){

	int n1 = arr[i];
	// cin>>n;
	if(n1==-1) return NULL;
	Node * root = new Node(n1); //1
	i++;
	root->left = buildTree2(arr, n); //2subtree
	i++;
	root->right = buildTree2(arr, n); //3subtree
	
	return root;

}

void preOrder( Node * root){
	//base case
	if(root == NULL) return;

	//rec case
	cout<<root->data<<'\t';
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder( Node * root){
	//base case
	if(root == NULL) return;

	//rec case
	inOrder(root->left);
	cout<<root->data<<'\t';
	inOrder(root->right);
}

int main(){

	int arr[] = {1,2,4,-1, -1, 5, -1, -1, 3, -1, -1};
	int n = sizeof(arr)/sizeof(int);
	// Node * root = buildTree();

	Node * root2 = buildTree2(arr, n);
	cout<<root2->data<<'\t'<<root2->left->data<<'\t'<<root2->right->data<<endl;

	preOrder(root2);
	cout<<endl;
	inOrder(root2);
	cout<<endl;

	return 0;
}