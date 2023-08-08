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

int lengthOfLL(Node * head){
	if(head == NULL) return 0;
	int ct = 1;
	while(head!=NULL){
		head = head->next;
		ct++;
	}
	return ct;
}

void insertAtHead(Node* &head, Node * &tail, int val){
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
		n1->next = head; // creating link , inserting at head
		head = n1; //changing head pointer
	}
}

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

void insertAtAnyPos(Node* &head, Node * &tail, int val, int pos){
	if(pos == 0){
		insertAtHead(head, tail, val);
		return;
	}
	else if(pos>=lengthOfLL(head)){
		insertAtTail(head, tail, val);
		return;
	}
	else{
		Node * n1 = new Node(val); // node created
		//now travel to the postn
		Node * cur = head;
		int mvCtr = pos-1;
		while(mvCtr>0){
			cur = cur->next;
			mvCtr--;
		}
		n1->next = cur->next;
		cur->next = n1;
		return;
	}
}

void deleteAtHead(Node * &head, Node * &tail){
	if(head == NULL) return;
	else if(head == tail){
		delete head; //node delete
		head = NULL;
		tail = NULL;
		return ;
	}
	else{
		Node * temp = head->next;
		head->next = NULL; // link destroy
		delete head; // node mem free
		head = temp; // updating new head
		return;
	}
}

void linearSearchLL(Node * head, int etf){
	if(head == NULL){
		cout<<"LL is empty"<<endl;
		return;
	}
	int i = 0;

	while(head != NULL){
		if(head->val == etf){
			cout<<"Element Found at Pos "<<i<<endl;
			return;
		}
		head = head->next;
		i++;
	}
	return;
}

void printLL(Node * head){
	if(head == NULL) return ; //LL is empty

	while(head!=NULL){
		cout<<head->val<<'\t';
		head = head->next;
	}
	cout<<endl;
}

void printLLRec(Node * head){
	if(head == NULL) {
		cout<<endl;
		return;
	}
	cout<<head->val<<'\t';
	printLLRec(head->next);
}

int main(){
	// Node n1(10);
	// Node n2(20);
	// //lets link these nodes
	// n1.next = &n2;
	// cout<<n1.val<<endl<<n2.val<<endl;
	// cout<<n1.next<<endl<<(&n2)<<endl;
	// //syntax 1 for referencing n2's value via n1 pointer
	// cout<<(*(n1.next)).val<<endl;

	// //syntax 2 is arrow operator
	// cout<<n1.next->val<<endl;

	Node * head = NULL; //it will keep track of head of the linked list
	Node * tail = NULL; // it will keep track of the tail of the linked list

	insertAtHead(head, tail, 1); //1
	insertAtHead(head, tail, 2); // 2->1
	insertAtHead(head, tail, 3); // 3->2->1
	
	printLL(head);

	insertAtTail(head, tail, 4); //3->2->1->4
	insertAtTail(head, tail, 5); //3->2->1->4->5

	printLLRec(head);

	// insertAtAnyPos(head, tail, val, pos) --> val to insert at pos 'pos' 
	insertAtAnyPos(head, tail, 6, 3); // 3->2->1->6->4->5 //0 based indexing
	printLL(head);

	deleteAtHead(head, tail);
	printLL(head);

	linearSearchLL(head, 4);

	return 0;
}