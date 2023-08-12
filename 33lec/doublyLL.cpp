#include<iostream>
using namespace std;

class Node{
public:
	//val
	int val;

	//pointer
	// next pointer points to another node / forward node in the list
	Node * next = NULL;
	Node * prev = NULL;

	//constructor
	Node(int v, Node * ptr1 = NULL, Node * ptr2 = NULL){
		val = v;
		next = ptr1;
		prev = ptr2;
	}
};


int main(){
	

	Node * head1 = NULL, *head2 = NULL; //it will keep track of head of the linked list
	

	return 0;
}