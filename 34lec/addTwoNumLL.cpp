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


Node * addTwoNum(Node* l1, Node * l2){
	Node * l3 = new Node((l1->val + l2->val)%10);
	Node * cur = l3;
	int carry = (l1->val + l2->val)/10;
	l1 = l1->next;
	l2 = l2->next;
	while(l1!=NULL || l2!=NULL || carry>0){
		int n1 = (l1==NULL)? 0 : l1->val;
		int n2 = (l2==NULL)? 0 : l2->val;
		int summ = (n1 + n2 + carry);
		carry = summ/10;
		Node * newNode = new Node(summ%10);
		cur->next = newNode;
		if(l1!=NULL)
		l1 = l1->next;
		if(l2!=NULL)
		l2 = l2->next;
		cur = cur->next;
	}
	return l3;
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
	Node* l1head = NULL, *l1tail = NULL, *l2head = NULL, *l2tail = NULL;
	insertAtTail(l1head, l1tail,2);insertAtTail(l1head, l1tail,4);insertAtTail(l1head, l1tail,3);
	insertAtTail(l2head, l2tail,5);insertAtTail(l2head, l2tail,6);insertAtTail(l2head, l2tail,4);
	printLLRec(l1head);printLLRec(l2head);
	Node * l3 = addTwoNum(l1head, l2head);
	printLLRec(l3);
	return 0;
}