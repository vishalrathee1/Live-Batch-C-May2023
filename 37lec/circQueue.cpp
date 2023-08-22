#include<iostream>
using namespace std;

//just changed front function and print function otherwise whole logic was correct

class circularQueue{
public:
	int fr;
	int rear;
	int capacity;
	int len;
	int *arr;

	//constructor
	circularQueue(int c = 6){
		capacity = c+1;
		fr = 0;
		rear = 0;
		len = 0;
		arr = new int[capacity];
	}

	//push
	void push(int data){
		if((rear+1)%capacity == fr){
			cout<<"Queue is full"<<endl;
		}
		else{
			arr[(rear+1)%capacity] = data;
			rear = (rear+1)%capacity;
			// cout<<rear<<'\t';
			len++;
		}
		
	}


	//pop
	void pop(){
		if(fr == rear){
			//queue is empty
		}
		else{
			fr = (fr+1)%capacity;
			len--;
		}
	}


	//front
	int front(){
		return arr[(fr+1)%capacity]; //changed this
	}


	//size
	int size(){
		return len;
	}

	//empty
	bool empty(){
		return len==0;
	}

	//print
	void print(){
		// cout<<fr<<endl;
		int t = fr;
		while(t!=rear){
			t = (t+1)%capacity;
			cout<<arr[t]<<'\t';
			// fr = (fr+1)%capacity; //instead of using this, used another variable t
			// other than that the whole logic was correct
		}
		cout<<endl;
	}
};

int main(){

	circularQueue cq(4);
	cq.push(1);cq.push(2);cq.push(3);cq.push(4);
	cq.print(); //will print the queue // 1,2,3,4
	// cout<<cq.size()<<endl;

	cq.pop(); //1
	cq.pop(); //2
	cout<<cq.size()<<endl;
	cout<<cq.front()<<endl; //3
	cq.push(5); cq.push(6);
	cq.print(); //3,4,5,6

	return 0;
}