#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s;
	// stack<char> s;
	s.push(1);s.push(2);s.push(3);s.push(4);
	// s.push('A');s.push('B');s.push('C');s.push('D');
	cout<<s.size()<<endl; //4
	cout<<s.top()<<endl; //4
	s.pop();
	cout<<s.top()<<endl; //3
	return 0;
}