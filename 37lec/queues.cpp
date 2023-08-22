#include<iostream>
using namespace std;

template <typename T>
class Node{
public:
	T val;
	Node<T> * next;
	Node(T v=0, Node<T> * n=NULL){
		val = v;
		next = n;
	}
};

template <typename T>
class linked_list{
	//head and tail pointer
public:
	Node<T> * head , * tail;

	linked_list(Node<T> * h=NULL, Node<T> * t=NULL){
		head = h;
		tail = t;
	}

	void insertAtTail(T data){
		if(head == NULL){
			// LL is empty
			Node<T> * temp = new Node<T>(data);
			head = temp;
			tail = temp;
			head->next = NULL;
		}else{
			//LL is not empty
			Node<T> * temp = new Node<T>(data);
			tail->next = temp;
			tail = temp;
		}
	}

	void deleteAtHead(){
		if (head == NULL){
			cout<<"Queue is empty"<<endl;
		}else if(head == tail){
			//singular node
			delete head;
		}else{
			Node<T> * temp = head->next;
			delete head;
			head = temp;
		}
	}

};

template <typename T>
class queue{
	//we will create a LL
	linked_list<T> list1;
	int l=0; //keep track of length
public:
	// push
	void push(T data){
		//insert at tail
		list1.insertAtTail(data);
		l++;
	}

	//pop
	void pop(){
		// delete at head in LL
		list1.deleteAtHead();
		l--;
	}

	//front
	T front(){
		return list1.head->val;
	}

	//size
	int size(){
		return l;
	}

	//empty
	bool empty(){
		return l==0;
	}
};

int main(){
	// queue<char> q1;
	queue<int>q1;
	cout<<q1.empty()<<endl; //1
	q1.push(1);q1.push(2);q1.push(3);q1.push(4);q1.push(5);
	// q1.push('A');q1.push('B');q1.push('C');q1.push('D');q1.push('E');
	cout<<q1.front()<<endl; // 1
	q1.pop(); // 2,3,4,5
	cout<<q1.front()<<endl; //2
	q1.pop(); // 3,4,5
	cout<<q1.front()<<endl; //3
	cout<<q1.empty()<<endl; //0
	return 0;
}