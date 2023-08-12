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

void midPointLLOdd(Node * head){ // Length of LL is odd
	if(head == NULL){
		cout<<"LL is empty"<<endl;
		return;
	}
	Node * slow = head, *fast = head;
	while(fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"Mid point is "<<slow->val<<endl;
	return;

}

void midPointEven(Node * head){
	if(head == NULL){
		cout<<"LL is empty"<<endl;
		return;
	}
	Node * slow = head, *fast = head;
	while(fast!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"Mid point is "<<slow->val<<endl;
	return;
}

void midPoint(Node * head){ // in case of even it will retrun the first midpoint
	if(head == NULL){
		cout<<"LL is empty"<<endl;
		return;
	}
	Node * slow = head, *fast = head->next;
	while(fast!=NULL and fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"Mid point is "<<slow->val<<endl;
	return;
}

void bubbleSortLL(Node * head){
	int n = lengthOfLL(head);
	for(int i =0; i<n-1; i++){ // it just keep tracks of how many times inner loop has run
		for(Node * j = head; j->next!=NULL; j = j->next){
			if(j->val > j->next->val){
				swap(j->val,j->next->val);
			}
		}
	}
}

void k_th_EleFromEnd(Node * head, int k){
	Node * ahead = head, *prev = head;
	k--;
	while(k){
		ahead = ahead->next;
		k--;
	}
	while(ahead->next != NULL){
		prev=prev->next;
		ahead=ahead->next;
	}
	cout<<prev->val<<endl;
}

int main(){
	

	Node * head = NULL; //it will keep track of head of the linked list
	Node * tail = NULL; // it will keep track of the tail of the linked list

	// for(int i =1; i<=5; i++){
	// 	insertAtTail(head, tail, i);
	// }
	// printLLRec(head); //1 2 3 4 5
	// midPointLLOdd(head);
	// insertAtTail(head, tail, 6);
	// printLLRec(head);
	// midPointEven(head);
	// printLLRec(head);
	// midPoint(head);
	// deleteAtTail(head, tail);
	// printLLRec(head);
	// midPoint(head);

	insertAtTail(head, tail, 5);insertAtTail(head, tail, 6);insertAtTail(head, tail, 9);insertAtTail(head, tail, 4);
	insertAtTail(head, tail, 2);insertAtTail(head, tail, 3);insertAtTail(head, tail, 1);insertAtTail(head, tail, 19);
	printLLRec(head);
	bubbleSortLL(head);
	printLLRec(head);
	int k = 3;
	k_th_EleFromEnd(head, k); // 5
	return 0;
}