#include<iostream>
using namespace std;

class Node{
public:
	//val
	int val;

	//pointer
	// next pointer points to another node / forward node in the list
	Node * next=NULL;

	//constructor
	Node(int v, Node * ptr = NULL){
		val = v;
		next = ptr;
	}
};

void insertAtTail(Node* &head, Node * &tail, int val){
	if(head == NULL){
	// if(head == NULL and tail == NULL)
		// Node n1(val); // won't work because as soon as function call gets over it will get destroyed so we have to create node 
		//dynamically
		Node * n1 = new Node(val);
		head = n1;
		tail = n1;
	}
	else{
		Node * n1 = new Node(val);
		tail->next = n1;
		tail = n1;
	}
}

void printLLRec(Node * head){
	if(head == NULL) {
		cout<<endl;
		return;
	}
	cout<<head->val<<'\t';
	printLLRec(head->next);
}

void reverseLL(Node * & head){
	Node * prev = NULL, *cur = head, *next = NULL;
	while(cur!=NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
}

bool isCyclic(Node * head){
	Node * slow = head, * fast = head;
	while(fast!= NULL and fast->next!= NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow){
			return true;
		}
	} 
	return false;
}

void breakCycle(Node * &head){
	Node * slow = head, * fast = head;
	while(fast!= NULL and fast->next!= NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow){
			break;
		}
	} 
	slow = head;
	while(slow->next!=fast->next){
		slow = slow->next;
		fast = fast->next;
	}
	cout<<"Cycle Starts at node "<<slow->next->val<<endl;
	fast->next = NULL;
}

int main(){
	

	Node * head = NULL; //it will keep track of head of the linked list
	Node * tail = NULL; // it will keep track of the tail of the linked list
	insertAtTail(head, tail, 1);insertAtTail(head, tail, 2);
	insertAtTail(head, tail, 3);insertAtTail(head, tail, 4);


	// printLLRec(head	);
	// reverseLL(head);
	printLLRec(head	);
	if(isCyclic(head)){
		cout<<"Cycle is present"<<endl;
	}
	else{
		cout<<"Cycle is not present"<<endl;
	}

	tail->next = head->next;
	if(isCyclic(head)){
		cout<<"Cycle is present"<<endl;
	}
	else{
		cout<<"Cycle is not present"<<endl;
	}
	// printLLRec(head);

	//breaking a cycle or finding out which is the starting point of cycle
	breakCycle(head);
	printLLRec(head);


	return 0;
}