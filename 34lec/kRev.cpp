#include<iostream>
using namespace std;

class Node{
public:
	int val;
	Node * next = NULL;
	//constructor
	Node(int v = 0, Node * n = NULL){
		val = v;
		next = n;
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

Node * NextGroup(Node * head, int k){
	k--;
	while(k and head!=NULL){
		head = head->next;
		k--;
	}
	if(head == NULL) return NULL;
	return head;
}

Node * reverseLL(Node * & head){
	Node * prev = NULL, *cur = head, *next = NULL;
	while(cur!=NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
	cout<<head->val<<endl;
	return head;
}

Node * FindTail(Node * head){
	while(head->next!=NULL){
		head = head->next;
	}
	return head;
}

Node * kRev(Node * head, int k){
	Node * dHead = NULL, *prevGrpH = NULL, *nextGrp = NULL, *curgroup = head, *prevGrpT= NULL ;
	nextGrp = NextGroup(curgroup, k);
	Node * temp = nextGrp->next;
	nextGrp->next = NULL; // link break
	nextGrp = temp;
	prevGrpH = reverseLL(curgroup);
	dHead = prevGrpH;
	prevGrpT = FindTail(curgroup);

	prevGrpT->next = nextGrp;
	curgroup = nextGrp;
	while(true){
		Node * curGrpH = NULL, *curGrpT = NULL; 
		nextGrp = NextGroup(curgroup, k);
		// cout<<nextGrp->val<<endl;
		if(nextGrp == NULL) break;
		Node * temp = nextGrp->next;
		nextGrp->next = NULL; // link break
		nextGrp = temp;
		curGrpH = reverseLL(curgroup);
		curGrpT = FindTail(curgroup);
		prevGrpT->next = curGrpH;
		prevGrpT = curGrpT;
		curgroup = nextGrp;
	}
	prevGrpT->next = curgroup;
	return dHead;
}

int main(){
	Node* l1head = NULL, *l1tail = NULL;
	insertAtTail(l1head, l1tail,1);insertAtTail(l1head, l1tail,2);insertAtTail(l1head, l1tail,3);
	insertAtTail(l1head, l1tail,4);insertAtTail(l1head, l1tail,5);insertAtTail(l1head, l1tail,6);
	printLLRec(l1head);
	int k = 2;
	Node * kreversed = kRev(l1head,k);
	printLLRec(kreversed);
	return 0;
}