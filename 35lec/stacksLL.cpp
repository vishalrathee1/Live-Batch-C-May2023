#include<iostream>
using namespace std;

template <typename U>
class Node{	
public:
	U val;
	Node * next=NULL;
	Node(U v, Node* n = NULL){
		val = v;
		next = n;
	}
};

template <typename U>
class stack{
	Node<U> * head = NULL;
	int len = 0;
	public:
	//push()
	void push(U val){ //char val
		//insert at head
		if(head == NULL){
			Node<U> * n1 = new Node<U>(val);
			head = n1;
		}
		else{
			Node<U> * n1 = new Node<U>(val);
			n1->next = head; // creating link , inserting at head
			head = n1; //changing head pointer
		}
		len++;
	}

	//pop()
	void pop(){
		//delete at head
		if(head == NULL) return;
		else if(head->next == NULL){
			delete head; //node delete
			head = NULL;
		}
		else{
			Node<U> * temp = head->next;
			head->next = NULL; // link destroy
			delete head; // node mem free
			head = temp; // updating new head
		}
		len--;
	}

	//top()
	U top(){ //char
		return head->val;
	}

	//size()
	int size(){
		return len;
	}


	//empty()
	bool empty(){
		return len==0;
	}
};

int main(){
	// stack<int> s;
	stack<char> s;
	// s.push(1);s.push(2);s.push(3);s.push(4);
	s.push('A');s.push('B');s.push('C');s.push('D');
	cout<<s.size()<<endl; //4
	cout<<s.top()<<endl; //4
	s.pop();
	cout<<s.top()<<endl; //3
	return 0;
}