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
	// if(head == NULL) return 0;
	int ct = 0;
	while(head!=NULL){
		head = head->next;
		ct++;
	}
	return ct;
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

void deleteAtTail(Node * &head, Node * &tail){
	if(head == NULL) return; // LL is empty
	else if(head->next == NULL){ //head->next == NULL
		delete head; //node delete
		head = NULL;
		tail = NULL;
		return ;
	}
	else{
		int l = lengthOfLL(head);
		int ct = 1;
		Node * cur = head;
		while(ct<(l-1)){
			cur = cur->next;
			ct++;
		}
		cur->next = NULL;
		delete tail;
		// tail = NULL;
		tail = cur;
		return ;
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

Node *  midPoint(Node * head){ // in case of even it will retrun the first midpoint
	if(head == NULL){
		cout<<"LL is empty"<<endl;
		return head;
	}
	Node * slow = head, *fast = head->next;
	while(fast!=NULL and fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	// cout<<"Mid point is "<<slow->val<<endl;
	return slow;
}

//this function always merge two sorted linked lists into a single list and return its head
Node* mergeTowSortedLists(Node * head1, Node * head2){
	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;

	// Node * newHead= new Node(0); //dummy node and it should be created dynamically
	Node * newHead = NULL;
	if(head1->val < head2->val){
		// newHead->val = head1->val;
		newHead = head1;
		newHead->next = mergeTowSortedLists(head1->next, head2);
	}
	else{
		// newHead->val = head2->val;
		newHead = head2;
		newHead->next = mergeTowSortedLists(head1, head2->next);
	}
	return newHead;
}

Node *mergeSortLL(Node * head){

	//base case
	if( /* head == NULL or */ head->next == NULL) return head;

	//rec case
	//divide list into two halves
	Node * mid = midPoint(head);
	Node * temp = mid->next;
	mid->next = NULL;
	mid = temp;
	Node * list1 = mergeSortLL(head);
	Node * list2 = mergeSortLL(mid);

	return mergeTowSortedLists(list1, list2);

}


int main(){
	

	Node * head1 = NULL, *head2 = NULL; //it will keep track of head of the linked list
	Node * tail1 = NULL, *tail2 = NULL; // it will keep track of the tail of the linked list

	// ll1 1-3-5-7
	// insertAtTail(head1, tail1, 1);insertAtTail(head1, tail1, 3);insertAtTail(head1, tail1, 5);insertAtTail(head1, tail1, 7);
	// insertAtTail(head2, tail2, 2);insertAtTail(head2, tail2, 4);insertAtTail(head2, tail2, 6);insertAtTail(head2, tail2, 8);

	// printLLRec(head1); printLLRec(head2);

	// Node* head3 = mergeTowSortedLists(head1, head2);
	// printLLRec(head3);

	insertAtTail(head1, tail1, 5);insertAtTail(head1, tail1, 3);insertAtTail(head1, tail1, 7);insertAtTail(head1, tail1, 1);
	insertAtTail(head1, tail1, 9);insertAtTail(head1, tail1, 4);insertAtTail(head1, tail1, 13);insertAtTail(head1, tail1, 6);

	printLLRec(head1);

	Node * sortedList = mergeSortLL(head1);
	printLLRec(sortedList);

	return 0;
}