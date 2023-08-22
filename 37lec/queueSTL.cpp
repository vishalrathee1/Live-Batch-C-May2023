#include<iostream>
#include<queue> // STL of queue
using namespace std;

int main(){
	queue<char> q1;
	// queue<int>q1;
	cout<<q1.empty()<<endl; //1
	// q1.push(1);q1.push(2);q1.push(3);q1.push(4);q1.push(5);
	q1.push('A');q1.push('B');q1.push('C');q1.push('D');q1.push('E');
	cout<<q1.front()<<endl; // 1
	q1.pop(); // 2,3,4,5
	cout<<q1.front()<<endl; //2
	q1.pop(); // 3,4,5
	cout<<q1.front()<<endl; //3
	cout<<q1.empty()<<endl; //0
	return 0;
}